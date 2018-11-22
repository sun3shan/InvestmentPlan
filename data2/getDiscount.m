function [res] = getDiscount(data, step)
len = length(data.od_code);
DISCOUNT = zeros(len, 1);
NUMPKG = zeros(len, 1);
RAWNUMPKG = zeros(len, 1);
INCREMENT = zeros(len, 1);
for i = 1:len
    otherPrice = data.avg_price(i)*ones(1,52);
    RAWNUMPKG(i) = getPkgNums(getNewAvgPrice(data.avg_price(i), ...
                                          data.num_package(i), ...
                                          data.discount_amount_limit(i),...
                                          DISCOUNT(i)), ...
                           otherPrice, data.num_package(i));
end


for discount = 1:3000000
    numPkg = zeros(len,1);
    for i = 1:len
        otherPrice = data.avg_price(i)*ones(1,52);
        numPkg(i) = getPkgNums(getNewAvgPrice(data.avg_price(i), ...
                                          data.num_package(i), ...
                                          data.discount_amount_limit(i),...
                                          discount), ...
                                otherPrice, data.num_package(i)) - RAWNUMPKG(i);
    end
end
remain = 3000000;
base = 0;
% while remain>0
%     if remain < step
%         step = floor(step/10);
%     end
%     if step == 0
%         step = 1;
%     end
    for discount = 0:step:remain
        if discount == 0
            continue;
        end
        if mod(discount, 3e4) == 0
            fprintf('\b\b\b\b\b%3d%%', int32(discount/3e4));
        end
        maxIncrement = 0;
        maxIncrementIndex = -1;
        maxNumPkg = 0;
        increment = base + discount - sum(DISCOUNT);
        for i = 1:len
            if DISCOUNT(i)+increment > data.discount_amount_limit(i)
                INCREMENT(i) = -1;
                continue;
            end
            otherPrice = data.avg_price(i)*ones(1,52);
            numpkg = getPkgNums(getNewAvgPrice(data.avg_price(i), ...
                                               data.num_package(i), ...
                                               data.discount_amount_limit(i), ...
                                               DISCOUNT(i)+increment), otherPrice, data.num_package(i)) - ...
                     RAWNUMPKG(i);
            INCREMENT(i) = numpkg - NUMPKG(i);
        end
        maxIncrement = max(INCREMENT);
        temp = find(INCREMENT==maxIncrement);
        if length(temp) == 1 
    %         if maxIncrement*2 > sum(INCREMENT)
                maxIncrementIndex = temp(1);
    %         else
    %             maxNumPkg = 0;
    %             maxIncrementIndex = -1;
    %             continue;
    %         end
        else
    %         min_discount = min(DISCOUNT(temp));
    %         temp2 = intersect(find(DISCOUNT==min_discount),temp);
            if discount+step>int32(remain)
                maxIncrementIndex = temp(1);
            else
                maxNumPkg = 0;
                maxIncrementIndex = -1;
                continue;
            end
        end
        maxNumPkg = INCREMENT(maxIncrementIndex);
        discount_ = DISCOUNT(maxIncrementIndex) + increment;

        for i = 1:len
            if DISCOUNT(i)>=discount_
                continue
            elseif discount_ > data.discount_amount_limit(i)
                continue
    %             otherPrice = data.avg_price(i)*ones(1,52);
    %             temp1 = getPkgNums(getNewAvgPrice(data.avg_price(i), ...
    %                                       data.num_package(i), ...
    %                                       data.discount_amount_limit(i), ...
    %                                       data.discount_amount_limit(i)), otherPrice, data.num_package(i)) - ...
    %                     RAWNUMPKG(i) - NUMPKG(i);
    %             otherPrice = data.avg_price(maxIncrementIndex)*ones(1,52);
    %             temp2 = getPkgNums(getNewAvgPrice(data.avg_price(maxIncrementIndex), ...
    %                                       data.num_package(maxIncrementIndex), ...
    %                                       data.discount_amount_limit(maxIncrementIndex), ...
    %                                       discount_ - data.discount_amount_limit(i)), otherPrice, data.num_package(maxIncrementIndex)) - ...
    %                     RAWNUMPKG(maxIncrementIndex) - NUMPKG(maxIncrementIndex);
    %            if temp1+temp2>maxIncrement
    %                
    %            end
            end
            otherPrice = data.avg_price(i)*ones(1,52);
            x = getPkgNums(getNewAvgPrice(data.avg_price(i), ...
                                          data.num_package(i), ...
                                          data.discount_amount_limit(i), ...
                                          discount_), otherPrice, data.num_package(i)) - ...
                RAWNUMPKG(i) - NUMPKG(i);
            otherPrice = data.avg_price(maxIncrementIndex)*ones(1,52);
            y = getPkgNums(getNewAvgPrice(data.avg_price(maxIncrementIndex), ...
                                          data.num_package(maxIncrementIndex), ...
                                          data.discount_amount_limit(maxIncrementIndex), ...
                                          DISCOUNT(i)), otherPrice, data.num_package(maxIncrementIndex)) - ...
                RAWNUMPKG(maxIncrementIndex) - NUMPKG(maxIncrementIndex);

            if  x + y > maxNumPkg
                DISCOUNT(maxIncrementIndex) = DISCOUNT(i);
                NUMPKG(maxIncrementIndex) = y + NUMPKG(maxIncrementIndex);
                maxIncrementIndex = i;
                maxNumPkg = x;
            end
        end
        otherPrice = data.avg_price(maxIncrementIndex)*ones(1,52);
        DISCOUNT(maxIncrementIndex) = discount_;
%         getMinDiscount(data.avg_price(maxIncrementIndex), ...
%                                                      data.num_package(maxIncrementIndex),...
%                                                      otherPrice,...
%                                                      maxNumPkg+NUMPKG(maxIncrementIndex)+RAWNUMPKG(maxIncrementIndex), ...
%                                                      discount_);
        NUMPKG(maxIncrementIndex) = NUMPKG(maxIncrementIndex)+maxNumPkg;
    end
%     if 3000000 - sum(DISCOUNT) == remain
%         if step == 1
%             break;
%         else
%             step = step / 10;
%         end
%     end
%     remain = 3000000 - sum(DISCOUNT);
%     base = sum(DISCOUNT);
% end
fprintf('\n');

res.DISCOUNT = DISCOUNT;
res.NUMPKG = NUMPKG;
res.INCREMENT = INCREMENT;
end