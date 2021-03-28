class Solution {
public:
    int check(TreeNode* root,int &res){
        if(root==NULL){
            return 0;
        }
        int l=check(root->left,res);
        int  r=check(root->right,res);
        int p=abs(l-r);
         res=res+p;
        int s=l+r+root->val;
        return s;
        
    }
    int findTilt(TreeNode* root) {
        int res=0,s=0;
        check(root,res);
        return res;
    }
};
