class Solution {
public:
    TreeNode* makeBST(vector<int> &v,int l,int h){
        if(l>h){
            return nullptr;
        }
        int mid=l+(h-l)/2;
        TreeNode* root=new TreeNode(v[mid]);
        root->left = makeBST(v,l,mid-1);
        root->right = makeBST(v,mid+1,h);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        return makeBST(nums,0,n-1);
    }
};
