// https://www.geeksforgeeks.org/problems/decimal-equivalent-of-binary-linked-list/1

class Solution
{
    public:
        void solve(Node *head, long long unsigned int &result){

            if(head == NULL){
                return;
            }
            result = (result*2 + head->data) % 1000000007;
            solve(head->next, result);

        }
        // Should return decimal equivalent modulo 1000000007 of binary linked list 
        long long unsigned int decimalValue(Node *head)
        {
           long long unsigned int result = 0;
           solve(head, result);
           return result;
        }
};
