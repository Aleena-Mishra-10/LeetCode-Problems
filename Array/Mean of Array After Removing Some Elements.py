class Solution:
    def trimMean(self, arr: List[int]) -> float:
        trim = len(arr)*0.05
        arr.sort()
        i = 0
        while i < trim:
            arr.pop(0)
            arr.pop()
            i+=1
        return sum(arr) / len(arr)
