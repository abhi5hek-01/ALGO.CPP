   void levelOrder(Node * root) {
        queue<Node*> q;
        if(root){ 
        q.push(root);
        }
        while(!q.empty()){
            Node* temp=q.front();
            cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
           q.push(temp->right);
         }
    q.pop();
        }
}
