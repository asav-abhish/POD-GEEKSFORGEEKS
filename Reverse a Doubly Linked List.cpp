//  https://www.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1

    public:
    Node* reverseDLL(Node * head)
    {
        Node *nxt = nullptr,*prev = nullptr,*cur = head;
        while(cur){
            nxt = cur->next;
            cur->next = prev;
            cur->prev = nxt;
            prev = cur,cur = nxt;
        }
        
        return prev;
    }
