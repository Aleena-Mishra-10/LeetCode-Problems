class Solution:
    def relativeSortArray(self, arr1: List[int], arr2: List[int]) -> List[int]:
        stack = []
        for i in range(len(arr2)):
            if arr2[i] in arr1:
                for j in range(arr1.count(arr2[i])):
                    stack.append(arr2[i])
                    arr1.remove(arr2[i])
        stack = stack + sorted(arr1)
        return stack
