class Solution(object):
    def minSubsequence(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        nums.sort()
        res=[]
        for i in range(len(nums)-1,-1,-1):
            if sum(nums[:i])<sum(nums[i:]):
                return nums[i:][::-1]
