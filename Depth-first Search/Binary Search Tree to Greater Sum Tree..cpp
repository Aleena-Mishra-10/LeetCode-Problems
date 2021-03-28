class Solution {
public:
    int helper(TreeNode* root,int s){
        if(root==NULL){
            return 0;
        }
        int rsum=helper(root->right,s);
        s = s+rsum;
        int x = root->val;
        root->val=root->val+s;
        int lsum=helper(root->left,x+s);
        return lsum+x+rsum;
    }
    TreeNode* bstToGst(TreeNode* root) {
       int ans= helper(root,0);
        return root;
    }
};
