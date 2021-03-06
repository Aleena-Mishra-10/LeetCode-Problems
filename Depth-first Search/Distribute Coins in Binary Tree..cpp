class Solution {
public:
    int ans=0;
    int solve(TreeNode* root){
        if(root==NULL)
            return 0;
        int l=solve(root->left);
        int r=solve(root->right);
        ans+=abs(l)+abs(r);
        return root->val+l+r-1;
    }
    int distributeCoins(TreeNode* root) {
        ans=0;
        if(root==NULL)
            return ans;
        solve(root);
        return ans;
    }
};
