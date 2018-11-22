function [res] = getNewDiscount2(data, SLOPE, INCREMENT, step)
len = length(data.od_code);
DISCOUNT = zeros(1,len);          % discount of every od_code
NUMPKG = zeros(1,len);            % amount of numpkg increment of every od_code
pkgnum_increment = zeros(1,len);  % numpkg increment of every od_code at the time
increment_slope = zeros(1,len);

remain = 3000000;

discount_inc = 0;           % discount increment
Discount = 0;
while Discount<3000000
    %% print
    if mod(Discount, 3e4) == 0
        fprintf('\b\b\b\b\b\b\b%3d%%', int32((Discount+discount_inc)/3e4));
    end
    
    %% get the increment of discount
    [max_increment_i, max_increment_discount_i] = max(INCREMENT(1:remain, :));
    [max_increment, od_code] = max(max_increment_i);
    DISCOUNT(od_code) = max_increment_discount_i(od_code);
    NUMPKG(od_code) = max_increment;
    
    Discount = sum(DISCOUNT);
    remain = 3000000 - Discount;
    
end
    
    
fprintf('\n');

res.DISCOUNT = DISCOUNT';
res.NUMPKG = NUMPKG';
% res.INCREMENT = pkgnum_increment';
end