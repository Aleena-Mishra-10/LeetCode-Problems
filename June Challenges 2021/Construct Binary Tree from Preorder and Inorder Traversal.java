class Solution {
    public TreeNode buildTree(int[] preorder, int[] inorder) {
        return rec(preorder,0,inorder,0,inorder.length-1);
    }
    
    public TreeNode rec(int[] preorder,int i,int[] inorder,int start,int end){
        if(i>=preorder.length || start>end) return null;

        
        TreeNode node=new TreeNode(preorder[i]);
        
        int inIndex = 0; 
        for (int j = start; j <= end; j++) {
            if (inorder[j] == node.val) {
                inIndex = j;
            }
        }        
        node.left=rec(preorder,i+1,inorder,start,inIndex-1);
        node.right=rec(preorder,i+inIndex-start+1,inorder,inIndex+1,end);
        
        return node;
    }
}
