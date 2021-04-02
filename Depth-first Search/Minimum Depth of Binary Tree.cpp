class Solution {
public:
    int MAX = INT_MAX - 1000;
    int helper(TreeNode* root){
        if(root == nullptr) return MAX;
        int left = helper(root->left);
        int right = helper(root->right);
        if(left == MAX && right == MAX) return 1;
        return min(left+1,right+1);
    }
    int minDepth(TreeNode* root) {
        if(root==nullptr){
            return 0;}
        return helper(root);
        
        }
};
