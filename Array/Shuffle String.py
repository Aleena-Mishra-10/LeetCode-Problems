class Solution:
    def restoreString(self, s: str, indices: List[int]) -> str:
        sList = list(s)
        j = 0
        for i in indices:
            sList[i] = s[j]
            j += 1
            
        return "".join(sList)
