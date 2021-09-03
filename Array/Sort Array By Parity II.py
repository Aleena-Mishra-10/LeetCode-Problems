class Solution(object):
    def sortArrayByParityII(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        e = 0
        o = 1
        while e<len(nums) and o<len(nums):
            if nums[e]%2==0:
                e+=2
            else:
                if nums[o]%2!=0:
                    o+=2
                else:
                    nums[e],nums[o]=nums[o],nums[e]
                    e+=2
                    o+=2
        return nums
