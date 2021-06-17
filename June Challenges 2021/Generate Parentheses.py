class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        def backtracking(nOpen, nClose, path):
            if n == nClose:  # Found a valid n pairs of parentheses
                ans.append(path)
                return

            if nOpen < n:  # Number of opening bracket up to `n`
                backtracking(nOpen + 1, nClose, path + "(")
            if nClose < nOpen:  # Number of closing bracket up to opening bracket
                backtracking(nOpen, nClose + 1, path + ")")

        ans = []
        backtracking(0, 0, "")
        return ans
