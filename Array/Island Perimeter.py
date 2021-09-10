class Solution:
    def islandPerimeter(self, grid: List[List[int]]) -> int:
        p = 0
        for i in range(len(grid)):
            for j in range(len(grid[i])):
                if grid[i][j]:
                    p += 4 - (i and grid[i-1][j])*2 - (j and grid[i][j-1])*2
        return p
