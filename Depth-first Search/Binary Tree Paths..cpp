class Solution {
public:
    void find(TreeNode* root,string s,vector<string> &v){
        if(!root){
            return;
        }
        s+=(to_string(root->val));
        s+="->";
        if(!root->left&&!root->right)
        {
            s.pop_back();
            s.pop_back();
            v.push_back(s);
            return;
        }
        find(root->left,s,v);
        find(root->right,s,v);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string s="";
        vector<string> v;
        find(root,s,v);
        return v;
    }
};
