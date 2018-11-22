function minDiscount = getMinDiscount(avgPrice, numPkg, otherPrice, getNumPkg, inputDiscount)
    if getNumPkg > numPkg || getNumPkg<0
        minDiscount = inputDiscount;
        return;
    end
    ownPrice = ((numPkg/getNumPkg-1)/sum(otherPrice.^-1.09)).^(1/1.09);
    if (avgPrice-ownPrice) < 0
        minDiscount = inputDiscount;
    else
        minDiscount = floor((avgPrice-ownPrice)*numPkg);
        if minDiscount > inputDiscount
            minDiscount = inputDiscount;
        end
    end
end