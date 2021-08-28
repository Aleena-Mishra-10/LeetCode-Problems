class Solution(object):
    def minOperations(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        count=0
        value=0
        for i in range(len(nums)-1):
            if nums[i+1] <= nums[i]:
                value = (nums[i]+1) -nums[i+1]
                nums[i+1] +=value
                count+=value
        print(nums)
        return count
