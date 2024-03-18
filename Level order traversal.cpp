// https://www.geeksforgeeks.org/problems/level-order-traversal/1

class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* root)
    {
      //Your code here
       queue<Node*>q;
        vector<int>v;
        q.push(root);
        Node *temp=root;
        while(!q.empty())
        {
            if(temp->left!=nullptr)
                q.push(temp->left);
            if(temp->right!=nullptr)
                q.push(temp->right);
            v.push_back(temp->data);
            q.pop();
            temp=q.front();
        }
        return v;
    }
};
