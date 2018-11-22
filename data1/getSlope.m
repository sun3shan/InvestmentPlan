function [slope] = getSlope(discount1, discount2,  data, od_code, otherPrice)
    numPkg = data.num_package(int32(od_code+1));

    dp1 = getPkgNums(data, od_code, otherPrice, discount1);
%     if discount2 > data.discount_amount_limit(od_code+1)
%         discount2 = data.discount_amount_limit(od_code+1);
%     end
    dp2 = getPkgNums(data, od_code, otherPrice, discount2);
    if discount1 == discount2
        slope = 0;
    else
        slope = (dp2-dp1)/(discount2-discount1);
    end
    
 
end 