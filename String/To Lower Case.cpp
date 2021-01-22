class Solution {
public:
    string toLowerCase(string str) {
        string res;
        for(auto s:str){
            if(isupper(s)){
                s=tolower(s);
                res.push_back(s);
            }
            else{
                res.push_back(s);
            }
        }
        return res;
    }
};
