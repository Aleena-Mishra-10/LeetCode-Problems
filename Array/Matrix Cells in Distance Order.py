class Solution:
    def allCellsDistOrder(self, rows: int, cols: int, rCenter: int, cCenter: int) -> List[List[int]]:
        cells = [[i,j] for i in range(rows) for j in range(cols)]
        return sorted(cells,key=lambda p:abs(p[0] - rCenter)+abs(p[1]-cCenter))
