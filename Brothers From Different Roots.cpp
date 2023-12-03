// https://www.geeksforgeeks.org/problems/brothers-from-different-root/1

class Solution
{
public:

    void inorder(Node* root,vector<int>& vec){
        if(root==NULL)
            return;
        inorder(root->left,vec);
        vec.push_back(root->data);
        inorder(root->right,vec);
    }
    
    int countPairs(Node* root1, Node* root2, int x)
    {
        vector<int> aa,bb;
        inorder(root1,aa);
        inorder(root2,bb);
        int i = 0;
        int j = bb.size()-1;
        int count = 0;
        while(i<aa.size() && j>=0){
            if(aa[i]+bb[j] == x){
                count++;
                i++;
                j--;
            }
            else if(aa[i]+bb[j] < x){
                i++;
            }
            else 
                j--;
        }
        return count;
    }
};
