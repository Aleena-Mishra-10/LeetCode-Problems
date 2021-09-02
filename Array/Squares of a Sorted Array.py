class Solution(object):
    def sortedSquares(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        if not nums:
            return []
        n = len(nums)
        result = [0]*n
        l = 0
        r = n-1
        i = n-1
        while(l<=r and i>=0):
            if(abs(nums[l])>abs(nums[r])):
                result[i]=nums[l]*nums[l]
                l+=1
            else:
                result[i]=nums[r]*nums[r]
                r-=1
            i-=1
        return result
