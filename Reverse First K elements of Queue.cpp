// https://www.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1

class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        queue<int> ans;
        stack<int> s;
        while(k--){
            s.push(q.front());
            q.pop();
        }
        int sz = s.size();
        while(sz--){
            ans.push(s.top());
            s.pop();
        }
        
        sz = q.size();
        
        while(sz--){
            ans.push(q.front());
            q.pop();
        }
        
        return ans;
    }
};
