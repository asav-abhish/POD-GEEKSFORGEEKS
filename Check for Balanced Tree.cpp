// https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1

class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    
    pair<bool, int>solve(Node* root)
    {
        if(!root) return {true, 0};
        
        auto left = solve(root->left);
        auto right = solve(root->right);
        
        bool curr = true;
        
        if(abs(left.second-right.second) > 1) curr = false;
        return {left.first&right.first&curr, 1 + max(left.second, right.second)};
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here
         return solve(root).first;
    }
};
