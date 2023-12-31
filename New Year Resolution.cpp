// https://www.geeksforgeeks.org/problems/good-by-2023/1

class Solution {
    
    public:
    int isPossible(int N , int coins[]) 
    {
        int dp[N+1][2026];
        memset(dp,-1,sizeof(dp));
        function<int(int,int)>f=[&](int i,int s){
            if(s && (s%20 ==0 || s%24 ==0 || s==2024)) return 1;
            if(i==N) return 0;
            if(dp[i][s] != -1) return dp[i][s];
            return dp[i][s] =  f(i+1,s+coins[i])|f(i+1,s);
        };
        return f(0,0);
    }
    
};
