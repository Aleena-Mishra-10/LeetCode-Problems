class Solution {
public:
    void pathSum(TreeNode* root,int targetSum,vector<int> &path,vector<vector<int>> &res){
        if(root->left == nullptr && root->right == nullptr){
            if(targetSum == 0){
                res.push_back(path);
                return;
            }
        }
        if(root->left){
            path.push_back(root->left->val);
            pathSum(root->left,targetSum-root->left->val,path,res);
            path.pop_back();
        }
        if(root->right){
            path.push_back(root->right->val);
            pathSum(root->right,targetSum-root->right->val,path,res);
            path.pop_back();
        }
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(root == nullptr){
            return {};
        }
        vector<vector<int>> res;
        vector<int> path(1,root->val);
        pathSum(root,targetSum-root->val,path,res);
        return res;
    }
};
