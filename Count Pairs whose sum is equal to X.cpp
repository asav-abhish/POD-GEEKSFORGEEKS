// https://www.geeksforgeeks.org/problems/count-pairs-whose-sum-is-equal-to-x/1

class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        // Code here
        unordered_map<int,int> freq;
        while(head1){
            freq[head1->data]++;
            head1 = head1->next;
        }
        int ans = 0;
        while(head2){
            if(freq.count(x-head2->data)){
                ans += freq[x-head2->data];
            }
            head2 = head2->next;
        }
        return ans;
    }
};
