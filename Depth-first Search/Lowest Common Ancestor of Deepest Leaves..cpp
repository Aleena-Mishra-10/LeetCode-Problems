class Solution {
public:
    int height(TreeNode* root){
        if(!root){
            return 0;
        }
        return 1+max(height(root->left),height(root->right));
    }
    TreeNode* finddeepnodes(TreeNode* root,int h,int level){
        if(!root){
            return NULL;
        }
        if(level+1==h){
            return root;
        }
        TreeNode* lsv=finddeepnodes(root->left,h,level+1);
        TreeNode* rsv=finddeepnodes(root->right,h,level+1);
        if(lsv && rsv){
            return root;
        }
        if(lsv){
            return lsv;
        }
        return rsv;
    }
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        int h=height(root);
        TreeNode* lca=finddeepnodes(root,h,0);
        return lca;
    }
};
