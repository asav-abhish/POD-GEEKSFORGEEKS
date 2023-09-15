// https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1

class Solution{
public:

        bool helper(int pos, int arr[], int sum, int n, vector<vector<int>>& dp) {
        if (sum == 0) return true;
        if (pos == n || sum < 0) return false;

        if (dp[pos][sum] != -1) {
            return dp[pos][sum];
        }

        return dp[pos][sum] = helper(pos + 1, arr, sum - arr[pos], n, dp) || helper(pos + 1, arr, sum, n, dp);
    }
    
    int equalPartition(int N, int arr[])
    {
          int sum = accumulate(arr, arr + N, 0);

        if (sum % 2 != 0) return false;

        sum /= 2;

        
       vector<vector<int>> dp(N + 1, vector<int>(sum + 1, -1));
       return helper(0, arr, sum, N, dp);
      
    }
};
