// https://www.geeksforgeeks.org/problems/distribute-candies-in-a-binary-tree/1

class Solution
{
    public:
    int solve(Node* root, int &ans){
        if(!root)   return 0;
        int l = solve(root->left, ans);
        int r = solve(root->right, ans);
        ans += abs(r);
        ans += abs(l);
        return (root->key + l + r - 1);
    }
    int distributeCandy(Node* root)
    {
        
        int ans = 0;
        int val = solve(root, ans);
        return ans;
    }
};
