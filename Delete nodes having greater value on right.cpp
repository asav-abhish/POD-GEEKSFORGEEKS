// https://practice.geeksforgeeks.org/problems/delete-nodes-having-greater-value-on-right/1

public:
    Node *compute(Node *head)
    {
        Node * temp = head;
        
        while(temp->next!=NULL){
            
            if(temp->data < temp->next->data){
                temp->data =  temp->next->data;
                Node*curr = temp->next;
                temp->next = temp->next->next;
                delete curr;
                temp = head;
            }
            else{
                temp = temp->next;
            }
        }
        return head;
    }
