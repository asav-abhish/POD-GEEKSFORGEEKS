// https://practice.geeksforgeeks.org/problems/binary-tree-to-bst/1

class Solution{
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    void inorder(Node* root, vector <int> &v){
        if(root == NULL) return;
        
        if (root->left) inorder(root->left,v);
        v.push_back(root->data);
        if (root->right) inorder(root->right, v);
        
    }
    
    void bttobst(Node* root,vector <int> v, int &s ){
        if(root == NULL) return;
        
        if (root->left) bttobst(root->left,v,s);
        root->data = v[s++];
        if (root->right) bttobst(root->right, v,s);
        
    }
    
    
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
        vector <int> v;
        inorder(root,v);
        sort(v.begin(),v.end());
        //return root;
        int i = 0;
          bttobst (root,v,i);
        return root;
    }
};
