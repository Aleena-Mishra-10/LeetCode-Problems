class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
       int cnt=0,n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                cnt++;
                if(cnt>1) return false;
                if(i>0 and nums[i+1]<nums[i-1]){
                    nums[i+1]=nums[i];
                }
                else{
                    nums[i]=nums[i+1];
                }
            }
        }
        return true;
    }
};
