

# we are using two pointer method 

# checking the current value with previous value


def maxProfit(prices):
    total_price = 0
    for i in range(1,len(prices)):
        if  prices[i-1] < prices[i]:
        # print("Buy price is: ",buy_price)
            total_price+=prices[i] - prices[i-1]
        
        # print("Price is: ",price)
        
    return total_price


profit = maxProfit([7,1,5,3,6,4])
print(profit)