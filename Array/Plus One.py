class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        stri = " "
        for i in range(len(digits)):
            stri=stri+str(digits[i])
        print(int(stri)+1)
        ans=[int(x) for x in str(int(stri)+1)]
        print(ans)
        return ans
