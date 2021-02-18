class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        map<vector<int>,bool> hash;
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++){
            for(int j=nums.size()-1;j>i;j--){
                int rem = target - (nums[i]+nums[j]);
                int x,y;
                x=i+1;
                y=j-1;
                while(x<y){
                    int innerSum = nums[x] + nums[y];
                    if(innerSum == rem){
                        vector<int> temp{nums[i], nums[j], nums[x], nums[y]};
                        sort(temp.begin(), temp.end());
                        if(hash.find(temp)==hash.end()){
                            hash[temp]=true;
                            ans.push_back(temp);
                        }
                        y--;
                    }else if(innerSum>rem){ // current x+y > rem decreasing the right side
                        y--;
                    }else{ // current x+y < rem increase from left side
                        x++;
                    
                    }
                }
            }
        }
        return ans;
        
    }
};
