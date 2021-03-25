class Solution {
public:
    bool check(TreeNode *p,TreeNode *q){
        if(!p || !q){
            return (p==q);
        }
        return (p->val==q->val && check(p->left,q->right) && check(p->right,q->left));
    }
    bool isSymmetric(TreeNode* root) {
        TreeNode* p=root->left;
        TreeNode* q=root->right;
        return check(p,q);
    }
};
