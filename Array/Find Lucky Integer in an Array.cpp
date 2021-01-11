class Solution {
public:
    int findLucky(vector<int>& arr) {
        
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        int res=INT_MIN;
        for(auto &it:mp){
            if(it.first==it.second){
                res=max(res,it.first);
            }
        }
        return res!=INT_MIN ? res:-1;
    }
};
