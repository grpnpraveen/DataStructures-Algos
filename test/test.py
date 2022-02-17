def max_profit(prices, fee):
    prices.sort(reverse=True)
    maxe=0
    profit=0
    for i in prices:
        if(i<profit):
            return 0;
        profit=profit+i-fee
        if(maxe<profit):
            maxe=profit
    return maxe

print(max_profit([2,3,4,5],1))