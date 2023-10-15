// https://practice.geeksforgeeks.org/problems/normal-bst-to-balanced-bst/1

class Solution{
    
    public:
    Node* buildtree( vector<int> &v, int s, int e){
        if(s > e){
            return NULL;
        }
        
        int mid = (s+e)/2;
        Node * root = new Node (v[mid]); 
        root->left = buildtree(v,s,mid-1);
        root->right = buildtree(v,mid+1,e);
        
        return root;
    }
    
    
    void inorder(Node*root, vector<int> &v){
        if(!root) return;
        
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
    }
    
    Node* buildBalancedTree(Node* root){
        vector<int> v;
    	inorder(root,v);
    	root = buildtree(v,0,v.size()-1);
    	return root;

    }
};
