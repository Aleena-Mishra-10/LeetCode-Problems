class Solution:
    def canMakeArithmeticProgression(self, arr: List[int]) -> bool:
        if(len(arr)==2):
            return True
        elif(len(arr)>=3):
            arr.sort()
            d=arr[1]-arr[0]
            for i in range(1,len(arr)-1):
                if(arr[i+1]-arr[i]!=d):
                    return False
            return True
