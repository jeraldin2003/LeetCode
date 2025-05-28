class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """

        bestbuy = prices[0]
        profit = 0
        x =  len(prices)
        for i in range (1,x):
            if prices[i]<bestbuy:
                bestbuy = prices[i]
            elif bestbuy<prices[i] and profit < prices[i] - bestbuy:
                profit = prices[i] - bestbuy

        return profit