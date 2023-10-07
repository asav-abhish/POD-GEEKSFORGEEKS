// https://practice.geeksforgeeks.org/problems/pairwise-swap-elements-of-a-linked-list-by-swapping-data/1

class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
        // The task is to complete this method
        Node *ans=new Node(0);
        Node *temp=ans;
        while(head && head->next)
        {
            Node *t=head->next->next;
            ans->next=head->next;
            ans=ans->next;
            ans->next=head;
            ans=ans->next;
            head=t;
        }
        if(head)
            ans->next=head;
        else    
            ans->next=NULL;
        return temp->next;
    }
};
