class Solution {
public:
    int strStr(string haystack, string needle) {
        int needle_length = needle.length();
        int haystack_len = haystack.length();
        if(needle_length==0){
            return 0;
        }
        int j=0;
        for(int i=0;i<haystack_len;i++){
            if(haystack[i]==needle[j]){
                j++;
            }
            else{
                i=i-j;
                j=0;
            }
            if(j==needle_length){
                return i-j+1;
            }
        }
        return -1;
    }
};
