class Solution {
    public String sortSentence(String s) {
        String s1[]=s.split(" ");
    String s2[]=new String[s1.length];
    for(int i=0;i<s1.length;i++){
       int x1=s1[i].length()-1; 
        s2[s1[i].charAt(x1)-'1']=s1[i].substring(0,x1);
    }
    String s3="";
    for(int i=0;i<s1.length;i++){
        s3=s3+s2[i]+" ";
    }
    return s3.substring(0,s3.length()-1);
    }
}
