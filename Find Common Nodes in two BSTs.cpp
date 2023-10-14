// https://practice.geeksforgeeks.org/problems/print-common-nodes-in-bst/1

class Solution
{
    public:
    //Function to find the nodes that are common in both BST. 
    
    void fun(Node *root,map<int,int> &m){
        if(!root) return;
        
        m[root->data]++;
        fun(root->left,m);
        fun(root->right,m);
    }
    vector <int> findCommon(Node *root1, Node *root2)
    {
     map<int,int> m;
     vector <int> v;
     fun(root1,m);
     fun(root2,m);
     
     for(auto x: m){
         if(x.second >= 2){
             v.push_back(x.first);
         }
     }
     return v;
    }
};
