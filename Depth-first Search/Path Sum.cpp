class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root){
            return false;
        }
        if(targetSum-root->val==0 && !root->left && !root->right){
            return true;
        }
        bool f = hasPathSum(root->left , targetSum - root->val) || hasPathSum(root->right,targetSum-root->val);
        return f;
    }
};
