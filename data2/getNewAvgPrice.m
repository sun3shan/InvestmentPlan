function [newAvgPrice] = getNewAvgPrice(data, od_code, discount)
    avgPrice = data.avg_price(int32(od_code+1));
    numPkg = data.num_package(int32(od_code+1));
    discountAmountLimit = data.discount_amount_limit(int32(od_code+1));
    if discount == 0
        newAvgPrice = avgPrice;
        return;
    end
    if discount > discountAmountLimit
        newAvgPrice = double(avgPrice*numPkg - discountAmountLimit)/numPkg;
    else
        newAvgPrice = double(avgPrice*numPkg - discount)/numPkg;
    end
   
end