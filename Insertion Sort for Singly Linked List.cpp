// https://www.geeksforgeeks.org/problems/insertion-sort-for-singly-linked-list/1

class Solution
{
    public:
    Node* insertionSort(struct Node* head_ref)
    {
        Node * faltu = new Node(-1);
        faltu->next = head_ref;
        Node * cur = head_ref->next;
        Node * pre = head_ref;
        
        while(cur != NULL){
            if(cur->data > pre->data){
                cur = cur->next;
                pre = pre->next;
                continue;
            }
            
            Node * temp = faltu;
            while(temp->next->data < cur->data){
                temp = temp->next;
            }
            pre->next = cur->next;
            cur->next = temp->next;
            temp->next = cur;
            cur = pre->next;
        }
        return faltu->next;
    }
    
};
