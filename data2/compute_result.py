# -*- coding: utf-8 -*-
"""
Created on Mon Nov 19 19:25:07 2018

@author: 01369718
"""

import pandas as pd
import numpy as np
import os

def loadData(csv_file):
    data = pd.read_csv(csv_file, index_col = ['city_code'])
    return data

def getNewAvgPrice(avgPrice, numPkg, discountAmountLimit, discount):
    if discount > discountAmountLimit:
        return (avgPrice*numPkg - discountAmountLimit)/numPkg
    return (avgPrice*numPkg - discount)/numPkg

def getPkgNums(ownPrice, otherPrice, numPkg):
    x = np.power(ownPrice, -1.09)
    y = np.power(np.array(otherPrice), -1.09)
    w = x + np.sum(y)
    ownNum = x/w*numPkg
    otherNum = []
    for i in range(len(otherPrice)):
        otherNum.append(np.round(y[i]/w*numPkg))
    return np.round(ownNum), otherNum

if __name__ == '__main__':
    raw_data = loadData('pricing_info.csv')
    limit = pd.Series(raw_data.discount_amount_limit)
    _pwd = 'x/'
#    _pwd = 'leaderboard2/'
    dirs = os.listdir(_pwd)
    data = {}
    for _dir in dirs:
        f = open(_pwd+_dir+'/'+os.listdir(_pwd+_dir)[0])
        x = pd.read_csv(f)
        f.close()
        z = pd.Series(x.discount_amount)
        z.index=x[x.columns[0]]
        y = limit - z
        if len(y[y<0])==0:
            if x.discount_amount.sum() == int(3e6):
                data[_dir] = x
                continue
            elif x.discount_amount.sum() < int(3e6):
                data[_dir] = x
#                print(_dir+': '+str( x.discount_amount.sum()))
                continue
        print(_dir+': '+str( x.discount_amount.sum())+','+str(y.sort_values().index[0]))
            
        
    result = {}
    for i in range(200):
        every_discount = {key:data[key].discount_amount[i] for key in data.keys()}
        for key in data.keys():
            otherPrice = [getNewAvgPrice(raw_data.avg_price[i], raw_data.num_package[i], raw_data.discount_amount_limit[i], every_discount[_key]) for _key in every_discount.keys() if _key!=key]
            while (len(otherPrice)<53):
                otherPrice.append(getNewAvgPrice(raw_data.avg_price[i], raw_data.num_package[i], raw_data.discount_amount_limit[i], 0))
            if not key in result.keys():
                result[key] = {}
            result[key][i],x = getPkgNums(getNewAvgPrice(raw_data.avg_price[i], raw_data.num_package[i], raw_data.discount_amount_limit[i], every_discount[key]), otherPrice, raw_data.num_package[i])
    amount = {}
    for key in data.keys():
        amount[key] = pd.Series(result[key]).sum()
    rank = pd.Series(amount, name='num_package').sort_values(ascending=False)
#        