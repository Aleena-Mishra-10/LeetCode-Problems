class Solution:
    def createTargetArray(self, nums: List[int], index: List[int]) -> List[int]:
        result = []
        for i,j in zip(index,nums):
            result.insert(i,j)
        return result
