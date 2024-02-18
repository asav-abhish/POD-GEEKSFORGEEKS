// https://www.geeksforgeeks.org/problems/sum-of-leaf-nodes-in-bst/1

class Solution
{
    public:
        void preorder(Node* node, int& ans){
            if(!node)return;
            
            if(node->right == NULL && node->left == NULL){
                ans += node->data;
                return;
            }
            
            preorder(node->right,ans);
            preorder(node->left,ans);
        }
        
        /*You are required to complete below method */
        int sumOfLeafNodes(Node *root ){
             int ans = 0;
             preorder(root, ans);
             return ans;
        }
};
