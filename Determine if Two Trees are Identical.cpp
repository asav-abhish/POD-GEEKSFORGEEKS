// https://www.geeksforgeeks.org/problems/determine-if-two-trees-are-identical/1

class Solution
{
    public:
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        //Your Code here
        if(!r1 || !r2) {
            if(r1!=r2)
                return false;  
            else
                return true;
        }
        
        if(r1->data != r2->data) return false;
        return isIdentical(r1->left, r2->left) && isIdentical(r1->right, r2->right);
    }
}
