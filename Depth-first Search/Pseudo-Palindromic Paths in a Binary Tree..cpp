class Solution {
public:
    int count=0;
       void dfs(TreeNode* root, vector<int>& map){
        if(root == NULL){
            return;
        }
        map[root->val]++;
        if(!root->left && !root->right){
            int odd = 0;
            for(int i = 0; i < 10; i++){
                if(map[i] % 2 == 1){
                    odd++;
                }
            }
            if(odd <= 1) count++;
        }
        dfs(root->left, map);
        dfs(root->right, map);
        map[root->val]--;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int> map(10, 0);
        dfs(root, map);
        return count;
    }
};
