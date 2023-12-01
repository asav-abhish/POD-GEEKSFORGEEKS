// https://www.geeksforgeeks.org/problems/check-whether-bst-contains-dead-end/1

class Solution{
  public:
  
    void fun(Node *root, int l, int r, bool &f){
        if (root == NULL) return;
        if (f) return ;
        if(!root->left && !root->right) {
            if(l == r){
                f = true;
                return;
            } 
        }
        fun(root->left,l, root->data - 1, f);
        fun(root->right,root->data +1, r, f);
    }
    bool isDeadEnd(Node *root)
    {
        //Your code here
        bool f = false;
        
        int a = 1;
        int b = INT_MAX;
        fun(root,a,b,f);
        return f;
    }
};
