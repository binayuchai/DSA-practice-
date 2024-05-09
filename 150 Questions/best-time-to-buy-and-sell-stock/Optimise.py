def maxProfit(prices):
    buy_price = prices[0];
    price = 0
    for i in range(1,len(prices)):
        if buy_price > prices[i]:
            buy_price = prices[i]
        # print("Buy price is: ",buy_price)
        
        price = max(price,prices[i]-buy_price)
        # print("Price is: ",price)
        
    return price


profit = maxProfit([7,1,5,3,6,4])
print(profit)
    
    
#Tracing--------------->

   
# 1  at index = 1

# max(0)

# buy = 1 at index = 2

# max(4)

# buy = 1 at index = 3

# max(4)

# buy = 1 at index = 4

# max(5)

# buy = 1 at index = 5
# max(5)
