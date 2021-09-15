class Solution:
    def numUniqueEmails(self, emails: List[str]) -> int:
        v = []
        for i in emails:
            x = i.index('@')
            s,y = i[0:x],i[x:]
            s = s.replace('.','')
            if '+' in s:
                j = 0
                while j < len(s):
                    if s[j] == '+':
                         s = s[0:j]
                         break
                    j+=1
            v.append(s+y)
        return len(set(v))
