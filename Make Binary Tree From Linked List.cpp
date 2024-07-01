// https://www.geeksforgeeks.org/problems/make-binary-tree/1

 public:
  
    void convert(Node *head, TreeNode *&root) {
         if(head == NULL)
        return ;
        
        root = new TreeNode(head->data);
        head= head->next;
        
       TreeNode* current = root;
        
        while(head)
        {
            if(head){
                current->left = new TreeNode(head->data);
                 head= head->next;
            }
            if(head){
                current->right = new TreeNode(head->data);
                 head= head->next;
            }
            current=current->left;
        }
    }
