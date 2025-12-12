def maxprofit(prices):
    maxProfit = 0
    for i in range(len(prices)):
        profit = 0
        for j in range(i+1, len(prices)):
            if prices[j] > prices[i]:
                profit = prices[j]-prices[i]
                maxProfit = max(maxProfit, profit)
    return maxProfit
        
def maxprofit2(prices):
    min_price = float('inf')
    max_profit = 0
    for price in prices:
        if price < min_price:
            min_price = price
        else:
            max_profit = max(max_profit, price-min_price)
    return max_profit
            

prices = [7,1,5,3,6,4]

print(maxprofit(prices))