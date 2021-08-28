class Solution(object):
    def sumZero(self, n):
        """
        :type n: int
        :rtype: List[int]
        """
        m = n//2
        fh = [-x for x in range(1,m+1)]
        sh = [x for x in range(1,m+1)]
        if n%2==0:
            return fh+sh
        else:
            return fh + [0] + sh
