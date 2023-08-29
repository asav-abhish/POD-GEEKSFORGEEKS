// https://practice.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1

Node* deleteNode(Node *head,int x)
{
    //Your code here
    
    if(x==1){
        return head->next;
    }
    Node *temp = head;
    
    for(int i = 1; i< x-1; i++){
        temp = temp->next;
    }
    temp->next = temp->next->next;
    return head;
}
