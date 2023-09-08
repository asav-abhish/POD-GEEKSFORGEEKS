// https://practice.geeksforgeeks.org/problems/minimum-multiplications-to-reach-end/1

class Solution {
  public:
    int minimumMultiplications(vector<int>& arr, int start, int end) {
        // code here
        queue<pair <int, int> > q;
        q.push({start,0});
        vector < int > dis(100000, 1e9);
        dis[start] = 0;
        if (start == end) return 0;
        int mod = 100000;
        
        while(!q.empty()){
            int node = q.front().first;
            int step = q.front().second;
            q.pop();
            
            for(auto itr: arr){
                int num = (itr * node) % mod;
                if(step + 1 < dis[num]){
                    dis[num] = step + 1;
                
                    if(num == end) return step + 1;
                    q.push({num,step+1});
                }
            }
        }
        return -1;
    }
};
