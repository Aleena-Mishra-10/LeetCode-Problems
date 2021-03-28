class Solution {
public:
    void traverse(TreeNode* root,int maxnode,int &c){
        if(root==NULL){
            return;
        }
        if(root->val>=maxnode){
            maxnode=root->val;
            c++;
        }
        traverse(root->left,maxnode,c);
        traverse(root->right,maxnode,c);
    }
    int goodNodes(TreeNode* root) {
        int c=0;
        traverse(root,root->val,c);
        return c;
        
    }
};
