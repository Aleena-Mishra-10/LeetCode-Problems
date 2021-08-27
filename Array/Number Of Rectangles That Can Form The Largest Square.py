class Solution(object):
    def countGoodRectangles(self, rectangles):
        """
        :type rectangles: List[List[int]]
        :rtype: int
        """
        maxLength = 0
        maxes = []
        for rect in rectangles:
            minimum = min(rect)
            maxes.append(minimum)
        maxLength = max(maxes)
        return maxes.count(maxLength)
