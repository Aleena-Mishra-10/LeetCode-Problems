class Solution(object):
    def __init__(self):
        self.ans = 0
    def helper(self,nums,index,xor):
        if index==len(nums):
            self.ans+=xor;
            return
        self.helper(nums,index+1,xor^nums[index])
        self.helper(nums,index+1,xor)
        return
    def subsetXORSum(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
       
        self.helper(nums,0,0)
        return self.ans
        
