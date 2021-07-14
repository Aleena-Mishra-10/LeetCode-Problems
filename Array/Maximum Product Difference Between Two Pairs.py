class Solution:
    def maxProductDifference(self, nums: List[int]) -> int:
        """The product difference is maximum when one pair is smallest
        and one pair is largest.
        Idea is to sort the array and choose first two and last two elements.
        """
        nums.sort()
        return nums[-1]*nums[-2]-nums[0]*nums[1]
