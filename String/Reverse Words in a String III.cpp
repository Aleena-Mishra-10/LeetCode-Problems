class Solution {
public:
    string reverseWords(string s) {
        vector<string> w;
        string temp="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                w.push_back(" ");
                w.push_back(temp);
                temp="";
            }
            else{
                temp+=s[i];
            }
        }
        w.push_back(" ");
        w.push_back(temp);
        for(int i=0;i<w.size();i++){
            if(w[i]!=" "){
            reverse(w[i].begin(),w[i].end());
            }
        }
        s="";
        for(int i=1;i<w.size();i++){
            s+=w[i];
        }
        return s;
    }
};
