class Solution {
    public int numIdenticalPairs(int[] nums) {
        int count=0;
        int[] b = new int[101];
        for(int i=0;i<nums.length;i++){
            if(b[nums[i]]>=1){
                count+=b[nums[i]];
            }
            b[nums[i]]++;
        }
        return count;
    }
}
