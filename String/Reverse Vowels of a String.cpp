class Solution {
public:
    string reverseVowels(string s) {
      int i = 0;
        int j = (s.size()-1);
        unordered_set<char> vowels;
        vowels.insert('a');
        vowels.insert('e');
        vowels.insert('i');
        vowels.insert('o');
        vowels.insert('u');
        while (i < j){
            if (vowels.find(tolower(s[i])) != vowels.end() && vowels.find(tolower(s[j])) != vowels.end()){
                std::swap(s[i], s[j]);
            i++;
            j-=1;
            }
            else if (vowels.find(tolower(s[i])) != vowels.end())
                j--;
            else if (vowels.find(tolower(s[j])) != vowels.end())
                i++;
            else{
                i++;
                j--;
            }
        }
        return s;  
    }
};
