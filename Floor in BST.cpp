// https://practice.geeksforgeeks.org/problems/floor-in-bst/1

class Solution{
    void fun(Node* root, int x, int &a){
        if(!root) return;
        if(root->data <= x ){
            a = max(a,root->data);
        }
        fun(root->left,x, a);
        fun(root->right,x, a);
    }
public:
    int floor(Node* root, int x) {
        // Code here
        int ans = -1;
        fun(root,x,ans);
        return ans;
    }
};
