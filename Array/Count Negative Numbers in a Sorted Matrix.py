class Solution(object):
    def countNegatives(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        count = 0
        for i in range(len(grid)):
            for j in range(1,len(grid[0])+1):
                if grid[i][-j]<0:
                    count+=1
                else:
                    break
        return count
