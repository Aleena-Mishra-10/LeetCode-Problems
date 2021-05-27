class Solution {
    public String shiftingLetters(String s, int[] shifts) {
        char[] ch = S.toCharArray();
        int cum_shift = 0;
        for(int i=cg.length-1;i>=0;i--){
            cum_shift += shifts[i];
            cum_shift %= 26;
            ch[i] = (char)((ch[i] - 'a' + cum_shift)%26 + 'a');
        }
        return String.valueOf(ch);
    }
}
