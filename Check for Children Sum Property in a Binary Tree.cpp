// https://www.geeksforgeeks.org/problems/children-sum-parent/1

class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    int isSumProperty(Node *root)
    {
     // Add your code here
     queue<Node *> q;
        q.push(root);
        while(!q.empty()){
            Node *node = q.front();
            q.pop();
            
            int sum = 0;
            if(node->left){
                q.push(node->left);
                sum += node->left->data;
            }
            if(node->right){
                q.push(node->right);
                sum += node->right->data;
            }
            
            if((node->left || node->right) && sum != node->data) 
                return false;
        }
        
        return true;
    }
};
