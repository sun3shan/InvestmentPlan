function [res] = getNewDiscount(data, INCREMENT, raw_step, ratio)
len = length(data.od_code);
DISCOUNT = zeros(1,len);          % discount of every od_code
NUMPKG = zeros(1,len);            % amount of numpkg increment of every od_code
% pkgnum_increment = zeros(1,len);  % numpkg increment of every od_code at the time
increment_slope = zeros(1,len);

Remain = 3000000;

discount_inc = 0;           % discount increment
Discount = 0;
step = raw_step;
processbar = 0;
while Discount<Remain
    %% print
    if Discount>=processbar
        fprintf('\b\b\b\b\b\b\b%3d%%', int32(Discount/3e4));
        processbar = processbar + 3e4;
    end
    
    maxIncrement = 0;
    maxIncrementIndex = -1;
    %% get the increment of discount
    discount_inc = discount_inc + step;
    %% get the increment of pkgnum of every od_code
    pkgnum_increment = zeros(1,len);
    od_code_range = find(DISCOUNT>0);
    if ~isempty(od_code_range)
        for k = od_code_range
            pkgnum_increment(k) = INCREMENT(DISCOUNT(k)+discount_inc,k) - INCREMENT(DISCOUNT(k),k);
        end
    end
    od_code_range = find(DISCOUNT==0)';
    pkgnum_increment(od_code_range) = INCREMENT(discount_inc,od_code_range);
    %% get the maximum value of all the increments and its index
    maxIncrement = max(pkgnum_increment);
    if maxIncrement==0
        continue;        
    end
    temp = find(pkgnum_increment>=maxIncrement*ratio);
    if length(temp) == 1
        maxIncrementIndex = temp(1);
    else
        minPrice = min(data.avg_price(temp));
        temp1 = intersect(find(data.avg_price'==minPrice), temp);
        maxIncrementIndex = temp1(1);
    end
    
    %% get the discount_amount of the od_code of which the increment at this time is max.
    discount = min(DISCOUNT(maxIncrementIndex)+discount_inc, data.discount_amount_limit(maxIncrementIndex));
    DISCOUNT(maxIncrementIndex) = discount;
    NUMPKG(maxIncrementIndex) = INCREMENT(DISCOUNT(maxIncrementIndex), maxIncrementIndex);
    
    %% 定义：Di(其中i属于[0,199])表示第i个流向的折扣，fi(x)表示第i个流向折扣与包裹数增量的函数，用j替代上面得到的maxIncrementIndex
      % 取 numpkg_incremnt(k) = (fk(Dj) - fk(Dk)) + (fj(Dk) - fj(Dj))，
      % 其中k满足discount_amount_limit(k)>=Dj且k!=j
      % 然后取使numpkg_increment(k)=max(numpkg_increment) 且
      % numpkg_increment(k)>0的k 为maxIncrementIndex
      j = maxIncrementIndex;
      
    % 获取除maxIncrementIndex之外，仍可以增加折扣的流向序号
    temp = find(data.discount_amount_limit'>=discount);
    temp = temp(temp~=j);
    od_code_range = intersect(find(DISCOUNT>0), temp);

    pkgnum_increment = zeros(1,len);
    % get numpkg_increment
    if ~isempty(od_code_range)
        for k = od_code_range
            %   Dk>0 时            fk(Dj) - fk(Dk))      
            %                   + (fj(Dk) - fj(Dj))
            pkgnum_increment(k) = INCREMENT(discount,k) - INCREMENT(DISCOUNT(k),k)...
                                + INCREMENT(DISCOUNT(k),j)'-INCREMENT(discount,j);
        end
    end
    od_code_range = intersect(find(DISCOUNT==0), temp);
    % Dk == 0时                   fk(Dj)  -   fj(Dj)              （fk(0) = 0, fj(0) = 0）
    pkgnum_increment(od_code_range) = INCREMENT(discount, od_code_range) - INCREMENT(discount, j);
    % get max(pkgnum_increment)
    maxIncrement = max(pkgnum_increment);
    if maxIncrement>0
        temp = find(pkgnum_increment>=maxIncrement*ratio);
        discount = min(DISCOUNT(j), data.discount_amount_limit(j));
        if length(temp) == 1
            DISCOUNT(j) = DISCOUNT(temp(1));
            if DISCOUNT(j) == 0
                NUMPKG(j) = 0;
                increment_slope(j) = 0;
            else
                NUMPKG(j) = INCREMENT(DISCOUNT(j), j);
            end
            maxIncrementIndex = temp(1);
            DISCOUNT(maxIncrementIndex) = discount;
            NUMPKG(maxIncrementIndex) = INCREMENT(DISCOUNT(maxIncrementIndex), maxIncrementIndex);
        else
            minPrice = min(data.avg_price(temp));
            temp1 = intersect(find(data.avg_price'==minPrice), temp);
            DISCOUNT(j) = DISCOUNT(temp1(1));

            if DISCOUNT(j) == 0
                NUMPKG(j) = 0;
                increment_slope(j) = 0;
            else
                NUMPKG(j) = INCREMENT(DISCOUNT(maxIncrementIndex), j);
            end
            maxIncrementIndex = temp1(1);
            DISCOUNT(maxIncrementIndex) = discount;
            NUMPKG(maxIncrementIndex) = INCREMENT(DISCOUNT(maxIncrementIndex), maxIncrementIndex);
        end        
    end

    od_code_range = find(DISCOUNT>0);
    num = length(od_code_range);
    flag = 0;
    if num>1
        maxList = [];
        maxAmount = 0;
        for m = num:-1:2
            cnm = nchoosek(od_code_range, m)';
            for c_i = cnm
                discount_amount = sum(DISCOUNT(c_i'));
                increment_amount = sum(NUMPKG(c_i'));
%                 discount_amount = min(discount_amount, min(data.discount_amount_limit(data.discount_amount_limit>Discount)));
                temp = setdiff(find(data.discount_amount_limit'>=discount_amount), c_i);
                mayrange = intersect(find(DISCOUNT<discount_amount), temp);
                if isempty(mayrange)
                    continue;
                end
                pkgnum_increment = zeros(1,len);
                pkgnum_increment(mayrange) = INCREMENT(discount_amount, mayrange);
                maxIncrement = max(pkgnum_increment);
                if maxIncrement>increment_amount && maxIncrement>maxAmount
                    temp = find(pkgnum_increment>=maxIncrement*ratio);
                    if length(temp) == 1
                        maxList = c_i;
                        maxIncrementIndex = temp(1);
                        maxAmount = INCREMENT(discount_amount, maxIncrementIndex);
                    else
                        minPrice = min(data.avg_price(temp));
                        temp1 = intersect(find(data.avg_price'==minPrice), temp);
                        maxList = c_i;
                        maxIncrementIndex = temp1(1);
                        maxAmount = INCREMENT(discount_amount, maxIncrementIndex);
                    end
                    flag = 1;
                    break;
                end
            end
        end
        if flag == 1
            discount_amount = sum(DISCOUNT(maxList'));
            DISCOUNT(maxList') = 0;
            NUMPKG(maxList') = 0;
            DISCOUNT(maxIncrementIndex) = discount_amount;
            NUMPKG(maxIncrementIndex) = INCREMENT(DISCOUNT(maxIncrementIndex), maxIncrementIndex);
        end
    end
    
    discount_inc = 0;
    Discount = sum(DISCOUNT);
    
    step =  int32(min([raw_step, 3e6-Discount, min(data.discount_amount_limit(data.discount_amount_limit>Discount))-Discount]));
    if step <= 0
        step = raw_step;
    end
    
end
    
    
fprintf('\n');

res.DISCOUNT = DISCOUNT';
res.NUMPKG = NUMPKG';
% res.INCREMENT = pkgnum_increment';
end