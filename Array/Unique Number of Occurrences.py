class Solution(object):
    def uniqueOccurrences(self, arr):
        """
        :type arr: List[int]
        :rtype: bool
        """
        c = collections.Counter(arr)
        l = []
        for i in c:
            if c[i] in l:
                return False
            else:
                l.append(c[i])
        return True
