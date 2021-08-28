class Solution(object):
    def repeatedNTimes(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if len(nums) == 0:
            return
        n = len(nums) // 2
        counts = {}
        for num in nums:
            if not counts.get(num):
                counts[num] = 1
            else:
                counts[num] += 1
        for k in counts.keys():
            if counts[k] == n:
                return k
