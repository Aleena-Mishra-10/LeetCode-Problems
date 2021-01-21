class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        int r=0;
        
        for(int i=0;i<words.size();++i){
            bool valid = true;
            for(int j=0;j<words[i].length();++j){
                if(!(allowed.find(words[i][j]) != std::string::npos)){
                    valid = false;
                    break;
                }
            }
            if(valid){
                r++;
            }
        }
        return r;
    }
};
