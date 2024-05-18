//  https://www.geeksforgeeks.org/problems/find-the-closest-number5513/1

class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        // Complete the function
         int min_diff=INT_MAX;
        int ans=0;
        for(int i=0;i<n;i++){
            
            int diff=abs(arr[i]-k);
            if(diff<=min_diff){
                min_diff=diff;
                ans=arr[i];
            }
        }
        return ans;
    } 
