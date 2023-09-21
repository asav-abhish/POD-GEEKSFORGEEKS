// https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1

public:
    //Function to find the maximum money the thief can get.
    int fun (vector <int> &dp, int arr[], int n, int i){
        if( i >= n){
            return 0;
        }
        if(dp[i] != -1){
            return dp[i];
        }
        
        int taken = fun(dp,arr,n, i+2) + arr[i];
        int nottaken = fun(dp,arr,n,i+1 );
        
        return dp[i] = max(taken,nottaken);
    }
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        vector <int> dp (n+1,-1);
        return fun(dp,arr,n,0);
    }
