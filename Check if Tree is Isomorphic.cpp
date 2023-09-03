// https://practice.geeksforgeeks.org/problems/check-if-tree-is-isomorphic/1

public:
    // Return True if the given trees are isomotphic. Else return False.
    bool isIsomorphic(Node *root1,Node *root2)
    {
    //add code here.
    if(!root1 && !root2) return true;
    
    if(root1 && !root2 || !root1 && root2 || root1->data != root2->data) return false;
    
    bool x = isIsomorphic(root1->right,root2->right) || isIsomorphic(root1->right,root2->left);
    bool y = isIsomorphic(root1->left,root2->left) || isIsomorphic(root1->left,root2->right);
    
    if(x && y ) return true;
    else return false;
    }
