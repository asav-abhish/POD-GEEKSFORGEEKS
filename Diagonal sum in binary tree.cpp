// https://www.geeksforgeeks.org/problems/diagonal-sum-in-binary-tree/1

class Solution {
    
    void traverseTree(map<int,int>& mp, Node* node, int level){
        if(!node){
            return;
        }
        
        mp[level] += node->data;
        traverseTree(mp, node->left, level+1);
        traverseTree(mp, node->right, level);
    }
    
  public:
    vector<int> diagonalSum(Node* root) {
        map<int, int> mp;   // contains <level, sum>
        
        traverseTree(mp, root, 0);
        vector<int> res;
        for(auto it : mp){
            res.push_back(it.second);
        }
        
        return res;
    }
};
