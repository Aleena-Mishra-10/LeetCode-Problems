class Solution(object):
    def buildArray(self, target, n):
        """
        :type target: List[int]
        :type n: int
        :rtype: List[str]
        """
        stack = []
        for i in range(1,n+1):
            if(i in target):
                stack.append("Push")
            else:
                stack.append("Push")
                stack.append("Pop")
            if(i==(target[-1])):
                break
        return stack
