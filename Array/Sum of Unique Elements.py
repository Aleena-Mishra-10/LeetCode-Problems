class Solution(object):
    def sumOfUnique(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        t = 0
        arr = []
        for i in range(len(nums)):
            if nums.count(nums[i]) == 1:
                arr.append(nums[i])
            else:
                t = 0
        t = sum(arr)
        return t
