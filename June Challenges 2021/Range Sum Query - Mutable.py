class BIT:
    def __init__(self, size):
        self.bit = [0] * (size + 1)  # all operation is 1-based indexing
        self.size = size

    def getSum(self, idx):  # Get sum in range [0..idx]
        s = 0
        while idx > 0:
            s += self.bit[idx]
            idx -= idx & (-idx)
        return s

    def getSumRange(self, left, right):  # left, right inclusive
        return self.getSum(right) - self.getSum(left - 1)

    def addValue(self, idx, val):
        while idx <= self.size:
            self.bit[idx] += val
            idx += idx & (-idx)

class NumArray:

    def __init__(self, nums: List[int]):
        self.nums = nums
        self.bit = BIT(len(nums))
        for i, v in enumerate(nums):
            self.bit.addValue(i+1, v)

    def update(self, index: int, val: int) -> None:
        diff = val - self.nums[index]  # get diff amount of `val` compared to current value
        self.bit.addValue(index+1, diff)  # add this `diff` amount at index `index+1` of BIT, plus 1 because in BIT it's 1-based indexing
        self.nums[index] = val # update latest value of `nums[index]`

    def sumRange(self, left: int, right: int) -> int:
        return self.bit.getSumRange(left+1, right+1)
