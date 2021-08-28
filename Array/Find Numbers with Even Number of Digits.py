class Solution(object):
    def findNumbers(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        count = 0
        for i in nums:
            a=str(i)
            b=[j for j in a]
            l=len(b)
            if l % 2 == 0:
                count+=1
            else :
                pass
        return count
