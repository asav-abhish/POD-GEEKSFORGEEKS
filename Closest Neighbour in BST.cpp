// https://www.geeksforgeeks.org/problems/closest-neighbor-in-bst/1

class Solution {
  public:
      void inorder(Node* root,vector<int> & ans){
      if(root==NULL){
          return;
      }
      inorder(root->left,ans);
      ans.push_back(root->key);
      inorder(root->right,ans);
  }
    int findMaxForN(Node* root, int n) {
     vector<int> ans;
     inorder(root,ans);
     for(int i=ans.size()-1;i>=0;i--)
     {
         if(ans[i]<=n){
             return ans[i];
         }
     }
     return -1;
        
    }
