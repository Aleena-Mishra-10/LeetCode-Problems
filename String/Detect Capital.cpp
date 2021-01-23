class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int c=0;
        bool allcap = true;
        for(char i:word){
            if(isupper(i)){
                if(allcap){
                    c++;
                }
                else{
                    return false;
                }
            }
            else{
                if(c > 1){
                    return false;
                }
                allcap = false;
            }
        }
        return true;
    }
};
