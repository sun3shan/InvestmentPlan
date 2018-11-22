function getPkgNum = getPkgNums(data, od_code, otherPrice, discount)
    ownPrice = getNewAvgPrice(data, od_code, discount);
    numPkg = data.num_package(od_code+1);
    x = ownPrice.^ -1.09;
    y = otherPrice.^ -1.09;
    w = x + sum(y);
    getPkgNum = round(x/w*numPkg*1e6)/1e6;
end