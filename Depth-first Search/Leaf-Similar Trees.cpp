class Solution {
public:
    void checker(TreeNode* root,vector<int>&m){
        if(root==NULL){
            return;
        }
        if(root->left==NULL and root->right==NULL){
            m.push_back(root->val);
        }
        checker(root->left,m);
        checker(root->right,m);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        if(root1==NULL and root2==NULL){
            return true;
        }
        else if((root1==NULL and root2!=NULL) || (root2==NULL and root1!=NULL))
        {
            return false;
        }
        else{
            vector<int> v1;
            vector<int> v2;
            checker(root1,v1);
            checker(root2,v2);
            if(v1==v2){
                return true;
            }
            else{
                return false;
            }
        }
    }
};
