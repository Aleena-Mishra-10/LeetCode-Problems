class Solution {
    public int largestAltitude(int[] gain) {
        int alt,max=alt=0;
        for(int value:gain){
            alt+=value;
            if(alt>max){
                max=alt;
            }
        }
        return max;
    }
}
