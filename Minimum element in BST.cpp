// https://www.geeksforgeeks.org/problems/minimum-element-in-bst/1

class Solution {
  public:
    int minValue(Node* root) {
        // Code here
         if(root->left==NULL)return root->data;
        minValue(root->left);
    }
};
