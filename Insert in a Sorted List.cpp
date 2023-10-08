// https://practice.geeksforgeeks.org/problems/insert-in-a-sorted-list/1

class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        Node* sec = head; 
        Node* prev = NULL; 
        Node* newnode = new Node(data);
        newnode->next = nullptr;
        while(sec){
            if(sec->data>data){
                newnode->next = sec;
                if(prev)
                    prev->next = newnode;
                break;
            }
            prev = sec;
            sec = sec->next;
        }
        if(sec == NULL && prev != NULL)
            prev->next = newnode;
        return prev?head:newnode;
    }
    
};
