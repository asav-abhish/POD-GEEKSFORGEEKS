// https://practice.geeksforgeeks.org/problems/insert-a-node-in-a-bst/1

class Solution
{
    public:
        Node* insert(Node* node, int data) {
        
            Node *f = node;
            while(true){
                if(f->data>data){
                    if(f->left){
                        f=f->left;
                    } 
                    else { 
                        f->left=new Node(data); 
                        break;
                        
                    }
                }
                else if(f->data<data){
                    if(f->right) f=f->right;
                    else { f->right=new Node(data); break;}
                }
                else {
                    break;
                }
            }
            
            return node;
    }

};
