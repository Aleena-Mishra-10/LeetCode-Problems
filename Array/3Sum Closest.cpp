class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int ans=INT_MAX;
        int prev=ans;
        int res=ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
            int sum = nums[i]+nums[j]+nums[k];
            ans=min(ans,abs(sum-target));
            if(prev!=ans)res=sum;
            prev=ans;    
            if(sum<=target)j++;
            else if(sum>target)k--;
            }
        }
        
        
        return res;
    }
};
