class Solution:
    def average(self, salary: List[int]) -> float:
        l = len(salary)
        salary = sorted(salary)
        return (sum(salary[1:l-1]))/(l-2)
