// https://practice.geeksforgeeks.org/problems/given-a-linked-list-reverse-alternate-nodes-and-append-at-the-end/1

class Solution
{
    public:
    void rearrange(struct Node *odd)
    {
        Node *head = odd;
        if (head != NULL and head->next != NULL and head->next->next!= NULL){
            Node *first, *second, *altlast;
            first = head;
            second = head->next;
            altlast = second;
            while (second and second->next){
                first->next = first->next->next;
                second->next = second->next->next;
                first = first->next;
                second = second->next;
            }
            struct Node *prev, *curr, *nxt, *tmp;
            prev = NULL;
            curr = altlast;
            while (curr){
                nxt = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nxt;
            }
            altlast = prev;
            first->next = altlast;
        }
    }
};
