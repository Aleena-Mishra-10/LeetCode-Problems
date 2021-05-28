class Solution {
    public int balancedStringSplit(String s) {
        int countR = 0;
        int ans = 0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='R'){
                countR++;
            }
            else{
                countR--;
            }
            if(countR==0){
                ans++;
            }
        }
        return ans;
    }
}
