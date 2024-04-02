// https://www.geeksforgeeks.org/problems/minimum-absolute-difference-in-bst-1665139652/1

class Solution
{
    public:
    void inorder(Node *root, vector<int> &ans){
        if(root==nullptr){
            return;
        }
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    }
    public:
    int absolute_diff(Node *root)
    {
        //Your code here
        vector<int> ans;
        inorder(root,ans);
        int minimum=INT_MAX;
        for(int i=0;i<ans.size()-1;i++){
            minimum=min(minimum, ans[i+1]-ans[i]);
        }
        return minimum;
    }
};
