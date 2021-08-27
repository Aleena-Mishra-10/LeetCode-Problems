class Solution(object):
    def diagonalSum(self, mat):
        """
        :type mat: List[List[int]]
        :rtype: int
        """
        n = len(mat)
        s = sum(mat[i][i] + mat[i][-i-1] for i in range(n))
        return s - mat[n>>1][n>>1] if n%2 ==1 else s
