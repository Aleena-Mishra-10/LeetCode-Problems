class Solution(object):
    def findGCD(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        mini , maxi = min(nums) , max(nums)
        return self.getGCD(maxi,mini)
    def getGCD(self,a,b):
        if b==0:
            return a
        return self.getGCD(b,a%b)
