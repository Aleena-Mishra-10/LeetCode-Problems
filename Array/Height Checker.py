class Solution(object):
    def heightChecker(self, heights):
        """
        :type heights: List[int]
        :rtype: int
        """
        sortedHeights = copy.deepcopy(heights)
        sortedHeights.sort()
        res = 0
        for index , val in enumerate(sortedHeights):
            if heights[index] != val:
                res += 1
        return res
