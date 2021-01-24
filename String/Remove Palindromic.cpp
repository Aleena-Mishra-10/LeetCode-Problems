class Solution {
public:
    bool isPal(string s,int n){
        for(int i=0;i<n;i++){
            if(s[i]!=s[n-1-i]){
                return 0;
            }
        }
        return 1;
    }
    int removePalindromeSub(string s) {
        int n=s.length();
        if(n==0) return 0;
        if(n==1) return 1;
        return isPal(s,n) ? 1:2;
    }
};
