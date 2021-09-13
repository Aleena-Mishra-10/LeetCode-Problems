class Solution:
    def minimumAbsDifference(self, arr: List[int]) -> List[List[int]]:
        arr.sort()
        min_abs = 1000000000000000
        hashmap = defaultdict(list)
        for i in range(len(arr)-1):
            key = arr[i+1]-arr[i]
            min_abs = min(min_abs,key)
            hashmap[key].append([arr[i],arr[i+1]])
        return hashmap[min_abs]
