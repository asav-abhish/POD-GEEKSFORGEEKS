// https://practice.geeksforgeeks.org/problems/kth-largest-element-in-bst/1

class Solution
{
    public:
    void inorder(Node*root,vector <int> &v){
        if(root == NULL) return;
        
        if(root->right) inorder(root->right,v);
        
        v.push_back(root->data);
        
        
        if(root->left) inorder(root->left,v);
    }
    int kthLargest(Node *root, int K)
    {
        //Your code here
        vector <int> v;
        inorder(root,v);
        return v[K-1];
    }
};
