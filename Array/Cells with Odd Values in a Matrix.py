class Solution(object):
    def oddCells(self, m, n, indices):
        """
        :type m: int
        :type n: int
        :type indices: List[List[int]]
        :rtype: int
        """
        count = 0
        row = [0]*m
        col = [0]*n
        for x,y in indices:
            row[x]+=1
            col[y]+=1
        for i in range(m):
            for j in range(n):
                if  (row[i]+col[j])%2==1:
                    count+=1
        return count
