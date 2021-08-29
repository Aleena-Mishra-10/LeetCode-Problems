class Solution(object):
    def finalPrices(self, prices):
        """
        :type prices: List[int]
        :rtype: List[int]
        """
        n = len(prices)
        stack = []
        res = prices
        for i , p in enumerate(prices):
            while stack and stack[-1][0]>=p:
                ele , j = stack.pop()
                res[j] = ele - p
            stack.append([p,i])
        return res
