class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        ans = []
        for num in nums2:
            if num in nums1:
                ans.append(nums1.pop(nums1.index(num)))
        return ans
