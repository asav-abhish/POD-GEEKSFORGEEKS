// https://www.geeksforgeeks.org/problems/min-distance-between-two-given-nodes-of-a-binary-tree/1

class Solution{
    public:
    Node* lca(Node* root,int a,int b){
        if(root==NULL || root->data==a || root->data==b) return root;
        Node* l = lca(root->left,a,b);
        Node* r = lca(root->right,a,b);
        if(l==NULL) return r;
        else if(r==NULL) return l;
        else return root;
    }
    int dist(Node* root,int k){
        if(root==NULL) return 0;
        if(root->data == k) return 1;
        int l=dist(root->left,k);
        int r=dist(root->right,k);
        if(l) return 1+l;
        else if(r) return r+1;
        else return 0;
    }
    /* Should return minimum distance between a and b
    in a tree with given root*/
    int findDist(Node* root, int a, int b) {
        // Your code here
         Node* Lca = lca(root,a,b);
        return dist(Lca,a)+dist(Lca,b)-2;
    }
};
