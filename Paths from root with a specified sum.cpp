// https://www.geeksforgeeks.org/problems/paths-from-root-with-a-specified-sum/1

/*// A Tree node
struct Node
{
	int key;
	struct Node *left, *right;
};*/

class Solution
{
    public:
     vector<vector<int>> ans;
    
    void solve(Node * root , int sum , vector<int> &t){
     
        if (!root) {
            return;
        }

        t.push_back(root->key);

        if (sum - root->key == 0) {
            ans.push_back(t);
        }

        solve(root->left, sum - root->key, t);
        solve(root->right, sum - root->key, t);

        t.pop_back();
      
        
    }
    vector<vector<int>> printPaths(Node *root, int sum)
    {
        //code here
        vector <int> t;
        
        solve(root , sum , t);
        //cout << root->key << endl;
        return ans;
    }
};
