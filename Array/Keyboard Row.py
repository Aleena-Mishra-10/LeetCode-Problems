class Solution:
    def findWords(self, words: List[str]) -> List[str]:
        output = []
        rows = [ "qwertyuiop", "asdfghjkl", "zxcvbnm" ] 
        for word in words:
            word_lower = word.lower()
            for row in rows:
                print(set(word_lower)&set(row))
                if set(word_lower) == set(word_lower)&set(row):
                      output.append(word)
        return output
