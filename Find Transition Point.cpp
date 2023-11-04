// https://www.geeksforgeeks.org/problems/find-transition-point-1587115620/1

public:    
    
    int transitionPoint(int arr[], int n) {
        int s=0,e=n-1;
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]==1){
                ans=mid;
                e=mid-1;
            }else if(arr[mid]<1){
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
        return ans;
    }
