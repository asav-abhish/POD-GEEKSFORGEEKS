// https://www.geeksforgeeks.org/problems/maximum-index-1587115620/1

class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int a[], int n) 
    { 
        // Your code here
        vector<int>lmin(n);
        lmin[0]=a[0];
        for(int i=1;i<n;i++){
            lmin[i]=min(lmin[i-1],a[i]);
        }
        
         vector<int>rmax(n);
         rmax[n-1]=a[n-1];
         for(int i=n-2;i>=0;i--){
             rmax[i]=max(rmax[i+1],a[i]);
         }
         
         int i=0,j=0,maxdiff=INT_MIN;
         while(i<n && j<n){
             if(lmin[i]<=rmax[j]){
                 maxdiff=max(maxdiff,j-i);
                 j++;
             }else{
                 i++;
             }
         }
         return maxdiff;
    }
};
