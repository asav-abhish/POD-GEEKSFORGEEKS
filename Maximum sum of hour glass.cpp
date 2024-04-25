// https://www.geeksforgeeks.org/problems/maximum-sum-of-hour-glass3842/1

// User function Template for C++

class Solution {
  public:
    int findMaxSum(int n, int m, vector<vector<int>> mat) {
        // code here
        for(int i = 0; i < n; i++)
       {
           for(int j = 1; j < m; j++)
           {
               mat[i][j] += mat[i][j-1];
           }
       }
       int ans = -1e9;
       for(int i = 0; i < n-2; i++)
       {
           for(int j = 2; j < m; j++)
           {
               int sum = mat[i][j] - (j-3 >=0 ? mat[i][j-3] : 0);
            //   cout << sum << " ";
               sum += mat[i+1][j-1]-mat[i+1][j-2];
            //   cout << sum << " ";
               sum += mat[i+2][j] - (j-3 >=0 ? mat[i+2][j-3] : 0);
            //   cout << sum << endl;
               ans = max(ans,sum);
           }
       }
       return (ans == -1e9 ? -1 : ans);
    }
};
