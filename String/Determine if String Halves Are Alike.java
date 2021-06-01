class Solution {
    public boolean halvesAreAlike(String s) {
        
        int len= s.length();
        int count = 0;
        for(int i=0,j=len-1;i<j;i++,j--){
            char c = s.charAt(i);
            char cj=s.charAt(j);
             if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')count++;
            if(cj=='a'||cj=='e'||cj=='i'||cj=='o'||cj=='u'||cj=='A'||cj=='E'||cj=='I'||cj=='O'||cj=='U')count--;
        }
        return count==0;
    }
}
