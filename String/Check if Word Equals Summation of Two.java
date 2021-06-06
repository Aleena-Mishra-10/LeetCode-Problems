class Solution {
    public boolean isSumEqual(String firstWord, String secondWord, String targetWord) {
        if(check(firstWord)+check(secondWord) == check(targetWord)){
            return true;
        }
        else{
            return false;
        }
    }
    public int check(String s){
        String wd = "";
        for(int i=0;i<s.length();i++){
            char ch= s.charAt(i);
            int val = (int)ch-97;
            wd=wd+val;
        }
        return Integer.parseInt(wd);
    }
}
