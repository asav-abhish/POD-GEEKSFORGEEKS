// https://www.geeksforgeeks.org/problems/flatten-bst-to-sorted-list--111950/1

class Solution
{
public:
 Node *flattenBST(Node *root)
    {
        // code here
        return bst(root);
    }
private:
    Node* bst(Node* root){
        if(root == NULL){
            return NULL;
        }
        
        bst(root->left);
        cout << root->data << " ";
        bst(root->right);
    }
};
