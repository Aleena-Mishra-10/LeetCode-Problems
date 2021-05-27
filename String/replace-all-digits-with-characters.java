class Solution {
    public String replaceDigits(String s) {
        int n=s.length();
        char[] ch=s.toCharArray();
         for(int i=1;i<n;i+=2){
             int ch1=Integer.parseInt(ch[i]+"");
             int temp=ch[i-1];
             ch1=temp+ch1;
             ch[i]=(char)ch1;
         }
        return new String(ch);
    }
}
