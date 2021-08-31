class Solution(object):
    def kWeakestRows(self, mat, k):
        """
        :type mat: List[List[int]]
        :type k: int
        :rtype: List[int]
        """
        hashTable = {}
        res = []
        for i in range(len(mat)):
            count = mat[i].count(1)
            if count not in hashTable.keys():
                  hashTable[count] = [i]
            else:
                hashTable[count].append(i)
        for i in sorted(hashTable.keys()):
            res+=hashTable[i]
            
        return res[:k]
