class Solution {
public:
    int maxDepth(Node* root) {
        if(root==NULL){
            return 0;
        }
        int level=0;
        queue<Node*>q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            Node *temp=q.front();
            q.pop();
            if(temp==NULL){
                if(!q.empty())
                    q.push(NULL);
                level++;
            }
			//see the binary tree level order traversal
			// I have jst changed else { } part rest code is same 
			else{        
                int size=temp->children.size();
                for(int i=0;i<size;i++){
                    q.push(temp->children[i]);
                }
            }
        }
        return level;
        
    }
};
