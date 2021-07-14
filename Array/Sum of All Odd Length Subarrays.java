class Solution {
    public int sumOddLengthSubarrays(int[] arr) {
        int sum = 0;
        for(int i=0;i<arr.length;i++){
            int count=0;
            for(int j=i;j<arr.length;j++){
                count+=arr[j];
                if((j+i)%2==0){
                    sum+=count;
                }
            }
        }
        return sum;
    }
}
