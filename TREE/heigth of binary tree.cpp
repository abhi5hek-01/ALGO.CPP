int height(Node* root) {
        if( root==NULL){
            return -1;
        }
return max(height(root->left),height(root->right))+1;
    }
