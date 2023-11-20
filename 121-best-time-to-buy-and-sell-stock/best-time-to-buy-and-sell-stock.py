class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        if not prices:
            return 0

        buy_price = prices[0] # at the begining the minimum price is the first price
        profit = 0 # at the begining the minimum  profit is zero
        
        for i in range(1,len(prices)):
            #if the current price is less than the previous buy price ; update the buy_price
            if prices[i] < buy_price:
                buy_price = prices[i]
            else: # if not check if you sell with the current price would you get better profit than the previous one
                profit = max(profit, prices[i]-buy_price) # compare the previous profit with the current profit
                
        return profit
