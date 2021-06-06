class Solution {
    public int minPartitions(String n) {
        int maxDigit = 0;
        for(char digit : n.toCharArray()){
            maxDigit = Math.max(maxDigit,digit - '0');
            if(maxDigit == 9) break;
        }
        return maxDigit;
    }
}
