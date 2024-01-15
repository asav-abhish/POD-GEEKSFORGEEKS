// https://www.geeksforgeeks.org/problems/grinding-geek/1

class Solution{
    public:
    int helper(int i, int n, int total, vector<int> &cost, vector<vector<int> >&dp ){
        if(i == n)  return 0;
        
        if(dp[i][total] != -1) return dp[i][total];
        
        if(total < cost[i]){
            return dp[i][total] = helper(i+1,n,total,cost,dp);
        }
        else{
            int leftamt = total - cost[i];
            int refund = cost[i] * 0.9;
            leftamt += refund; 
            
            int otp1 = 1 + helper(i+1, n,leftamt,cost,dp );
            int otp2 = helper(i+1,n,total,cost,dp );
            
            return dp[i][total] = max(otp1,otp2);
        }
    }
    
    int max_courses(int n, int total, vector<int> &cost)
    {
        
        vector < vector<int> > dp(n+1, vector<int>(total+1, -1) );
        return helper(0,n,total,cost,dp);
        
    }
};
