class Solution {
public:
    string reverseStr(string s, int k) {
        int i=0,start=0,end=0;
        int len = s.length()-1;
        while(i<=len){
            start=i;
            end=(i+k-1) > len ? len : (i+k-1);
            i=end+1;
            while(start<end){
                swap(s[start],s[end]);
                start++;
                end--;
            }
            i+=k;
        }
        return s;
        
    }
};
