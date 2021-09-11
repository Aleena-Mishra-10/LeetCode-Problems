class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        return functools.reduce(lambda i,j:i^j,nums)
