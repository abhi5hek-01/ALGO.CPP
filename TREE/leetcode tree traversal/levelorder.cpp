class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
     vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        if(root==NULL){
            return ans;
        }
        while(!q.empty()){
           int x=q.size();
            vector<int> v;
            while(x--){
            TreeNode* temp=q.front();
            q.pop();
            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
            v.push_back(temp->val);
            }
            ans.push_back(v);  
        }
        return ans;
    }
};
