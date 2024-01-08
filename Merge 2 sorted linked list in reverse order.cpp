// https://www.geeksforgeeks.org/problems/merge-2-sorted-linked-list-in-reverse-order/1

class Solution
{
    public:
    
    struct Node * mergeResult(Node *node1,Node *node2)
    {
    Node *ans = NULL;

    while (node1 && node2) {
        Node *node = new Node(); // Create a new node without specifying data
        node->data = (node1->data < node2->data) ? node1->data : node2->data;
        node->next = ans;
        ans = node;

        if (node1->data < node2->data) {
            node1 = node1->next;
        } else {
            node2 = node2->next;
        }
    }

   
    while (node1) {
        Node *node = new Node();
        node->data = node1->data;
        node->next = ans;
        ans = node;
        node1 = node1->next;
    }

    
    while (node2) {
        Node *node = new Node();
        node->data = node2->data;
        node->next = ans;
        ans = node;
        node2 = node2->next;
    }

    return ans;
    }  
};
