// https://www.geeksforgeeks.org/problems/row-with-minimum-number-of-1s5430/1

class Solution {
  public:
    int minRow(int n, int m, vector<vector<int>> a) {
        // code here
        int ones =  1001, ans = 0;
        for(int i = 0 ; i < n ; i++){
            int curr = 0 ;
            for(int j = 0 ; j < m ; j++){
                if(a[i][j]) curr+=1;
            }
             if(curr < ones){
                 ones = curr;
                 ans = i+1;
             }
        }
        return ans;
    }
};
