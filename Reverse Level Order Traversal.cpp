// https://www.geeksforgeeks.org/problems/reverse-level-order-traversal/1

vector<int> reverseLevelOrder(Node *root)
{
    // code here
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    vector<int>ans;
    while(!q.empty()){
        Node*temp=q.front();
        q.pop();
        if(temp==NULL){
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            ans.push_back(temp->data);
            if(temp->right){
                q.push(temp->right);
            }
            if(temp->left){
                q.push(temp->left);
            }
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
 
}
