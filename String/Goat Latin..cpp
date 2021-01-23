class Solution(object):
    def toGoatLatin(self, S):
        words = S.split()
        vowels = "aeiouAEIOU"
        result = []
        for i, word in enumerate(words):
            if word[0] not in vowels:
                word = word[1:] + word[0]
            result.append(word + "ma" + "a" * (i + 1))
        return " ".join(result)
