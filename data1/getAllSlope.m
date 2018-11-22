function [SLOPE] = getAllSlope(data, step)
len = length(data.od_code);
SLOPE = zeros(int32(min(max(data.discount_amount_limit),3e6)/step),len);
MAXDISCOUNT = max(data.discount_amount_limit);
index = 1;
for discount = 0:step:size(SLOPE,1)
    if mod(discount, 3e4) == 0
        fprintf('\b\b\b\b\b%3d%%', int32(discount/3e4));
    end
    if discount == 3000000 || discount>MAXDISCOUNT
        break;
    end
    for i = 1:len
        if discount>data.discount_amount_limit(i)
            continue;
        end
        otherPrice = data.avg_price(i)*ones(52,1);
        SLOPE(index, i) = getSlope(discount, discount+step, data, data.od_code(i), otherPrice);
    end
    index = index + 1;
end
fprintf('\n');

end