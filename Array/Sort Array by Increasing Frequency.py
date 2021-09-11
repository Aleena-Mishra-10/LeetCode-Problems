class Solution:
    def frequencySort(self, nums: List[int]) -> List[int]:
        m = {}
        l = []
        for i in nums:
            if i not in m:
                m[i]=1
            else:
                m[i]+=1
        def merge_sort_freq(arr):
            if len(arr) > 1:
                mid = len(arr)//2
                left = arr[0:mid]
                right = arr[mid:]
                merge_sort_freq(left)
                merge_sort_freq(right)
                l = r = i = 0
                while l <len(left) and r<len(right):
                    if m[left[l]] > m[right[r]]:
                        arr[i] = right[r]
                        r += 1
                    elif m[left[l]] == m[right[r]]:
                        if left[l] > right[r]:
                            arr[i] = left[l]
                            l += 1
                        else:
                            arr[i] = right[r]
                            r+=1
                    else:
                        arr[i]=left[l]
                        l+=1
                    i+=1
                while r<len(right) and i<len(arr):
                    arr[i]=right[r]
                    i+=1
                    r+=1
                while l<len(left) and i<len(arr):
                    arr[i]=left[l]
                    i+=1
                    l+=1
        merge_sort_freq(nums)
        return nums
