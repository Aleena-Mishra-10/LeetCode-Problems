class Solution(object):
    def sortArrayByParity(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        i , j = 0 , len(nums) - 1
        while i <= j:
            while i < len(nums) and nums[i] % 2 == 0:
                i += 1
            while j > 0 and nums[j] % 2 != 0:
                j -= 1
            if i >= j:
                return nums
            nums[i] , nums[j] = nums[j] , nums[i]
            i += 1
            j -= 1
        return nums
