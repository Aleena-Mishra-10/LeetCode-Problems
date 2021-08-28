class Solution(object):
    def busyStudent(self, startTime, endTime, queryTime):
        """
        :type startTime: List[int]
        :type endTime: List[int]
        :type queryTime: int
        :rtype: int
        """
        res = 0
        for i in range(len(startTime)):
            if endTime[i] >= queryTime >=startTime[i]:
                res += 1
        return res
