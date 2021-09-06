class Solution(object):
    def shortestToChar(self, s, c):
        """
        :type s: str
        :type c: str
        :rtype: List[int]
        """
        ids = [i for i in range(len(s)) if s[i]==c]
        print(ids)
        return [min([abs(i-id_) for id_ in ids]) for i in range(len(s))]
