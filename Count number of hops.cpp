// https://practice.geeksforgeeks.org/problems/count-number-of-hops-1587115620/1

public:
    //Function to count the number of ways in which frog can reach the top.
    int mod = 1e9+7;
    long long ways(int i,int n,vector<long long>&dp ){
        
        if(i > n) return 0;
        if(i == n) return 1;
        
        if(dp[i] != -1) return dp[i];
        long long ans = (ways(i+1,n,dp) % mod + ways(i+2,n,dp) % mod + ways(i+3,n,dp) % mod ) % mod;
        return dp[i] = ans;
    }
    long long countWays(int n)
    {
         if(n==1) return 1;
       vector<long long>dp(n+1,-1);
    return    ways(0,n,dp) % mod;
        
        
    }
