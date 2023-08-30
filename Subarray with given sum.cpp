// https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1?page=1&sortBy=submissions

public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        int left = 0;
        int right = 0;
        long long cursum = 0;
        vector<int> v;
        while(right < n && cursum < s){
            cursum += arr[right++];
            if(cursum == s){
                v.push_back(left+1);
                v.push_back(right);
                
                return v;
            }
            
            
            while(cursum> s && left < n){
                cursum -= arr[left];
                left++;
                
                if(cursum == s){
                    v.push_back(left+1);
                    v.push_back(right);
                    
                    return v;
                }
            }
        }
    v.push_back(-1);
    return v;
    }
