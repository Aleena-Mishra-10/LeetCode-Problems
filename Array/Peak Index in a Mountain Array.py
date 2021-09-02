class Solution(object):
    def peakIndexInMountainArray(self, arr):
        """
        :type arr: List[int]
        :rtype: int
        """
        l = 0
        r = len(arr) - 1
        while l <= r:
            mid = l + (r-l) // 2
            if arr[mid] < arr[mid-1] and arr[mid] > arr[mid+1]:
                r = mid -1
            elif arr[mid] > arr[mid-1] and arr[mid] < arr[mid+1]:
                l = mid +1 
            else:
                return mid
