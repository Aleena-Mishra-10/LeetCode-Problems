class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_wealth=-1,richest;
    
    for(int i=0;i<accounts.size();i++)
    {
        richest = 0;
        for(int j=0;j<accounts[i].size();j++)
        {
            richest+=accounts[i][j]; 
        }
        
        max_wealth=max(max_wealth,richest);
    }
    
    return max_wealth;
    }
};
