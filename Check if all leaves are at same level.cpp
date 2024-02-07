//  https://www.geeksforgeeks.org/problems/leaf-at-same-level/1

class Solution{
  public:
    /*You are required to complete this method*/
    int level = -1;
    bool solve(Node* root, int d){
        if(root->left == NULL && root->right == NULL){
            if(level == -1 || d == level){
                level = d;
                return true;
            }
            return false;
        }
        
        if(root->left != NULL && !solve(root->left, d+1)) return false;
        if(root->right != NULL && !solve(root->right, d+1)) return false;
        
        return true;
    }
    bool check(Node *root)
    {
        return solve(root, 0);
    }
};
