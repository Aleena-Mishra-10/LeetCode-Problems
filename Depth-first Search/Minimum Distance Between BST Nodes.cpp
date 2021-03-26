class Solution {
public:
    void inorder(TreeNode *r,vector<int> &v){
        if(r==NULL)
            return;
        
        inorder(r->left, v);
        v.push_back(r->val);
        inorder(r->right, v);
    }
    int minDiffInBST(TreeNode* root) {
        vector<int> v;
        inorder(root,v);
        int min=INT_MAX;
        for(int i=0;i<v.size()-1;i++){
            int a = v[i+1]-v[i];
            if(a<min){
                min=a;
            }
            
        }
        return min;
    }
};
