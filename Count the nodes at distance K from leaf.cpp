// https://www.geeksforgeeks.org/problems/node-at-distance/1

class Solution
{
    public:
    //Function to return count of nodes at a given distance from leaf nodes.
    
    void solve(Node* &root,int k,int level,set<Node*>& ans,vector<Node*> &path)
    {
        if(root==NULL) return ;
        path.push_back(root);
        if(root->left==NULL && root->right==NULL)
        {
            if(level-k>=0)
            {
                ans.insert(path[level-k]);
            }
        }
        
        
        
        solve(root->left,k,level+1,ans,path);
        solve(root->right,k,level+1,ans,path);
        path.pop_back();
        
        
    }
    int printKDistantfromLeaf(Node* root, int k)
    {
    	set<Node*>ans;
        vector<Node*>path;
        solve(root,k,0,ans,path);
        return ans.size();
    }
};
