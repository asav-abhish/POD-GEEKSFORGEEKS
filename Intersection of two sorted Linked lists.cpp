// https://www.geeksforgeeks.org/problems/intersection-of-two-sorted-linked-lists/1

class Solution
{
    public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        Node* ptr1 = head1;
        Node* ptr2 = head2;
        Node* head = NULL;
        Node* curr = NULL;
        while(ptr1 && ptr2) {
            if(ptr1->data == ptr2->data) {
                if(head==NULL) {
                    Node* val = new Node(ptr1->data);
                    head = val;
                    curr = val;
                }
                else {
                    Node* val = new Node(ptr1->data);
                    curr->next = val;
                    curr = val;
                }
                ptr1 = ptr1->next;
                ptr2 = ptr2->next;
            }
            else if(ptr1->data < ptr2->data) {
                ptr1 = ptr1->next;
                
            }
            else {
                ptr2 = ptr2->next;
            }
        }
        return head;
    }
};
