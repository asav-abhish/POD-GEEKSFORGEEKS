// https://practice.geeksforgeeks.org/problems/leftmost-and-rightmost-nodes-of-binary-tree/1

void printCorner(Node *root)
{
queue <Node*> q;    
q.push(root);

    while(!q.empty()){
        int size = q.size();
        if(size == 1){
            cout << q.front()->data << " ";
        }
        else{
            cout << q.front()->data << " " << q.back()->data << " ";
        }
        
        for(int i=0; i<size; i++){
            Node* x = q.front();
        
            q.pop();
            if(x->left){
                q.push(x->left);
            }
            
            if(x->right){
                q.push(x->right);
            }
        }
        
    }


}
