class Solution:
    def decompressRLElist(self, nums: List[int]) -> List[int]:
        k = []
        i = 0
        while i+1 in range(len(nums)):
            a = nums[i]
            b = nums[i+1]
            for _ in range(a):
                k.append(b)
            i = i+2
        return k
