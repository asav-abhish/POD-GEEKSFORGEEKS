// https://www.geeksforgeeks.org/problems/maximum-occured-integer4602/1

int a[maxx+1]={},ans=0;
        for(int i=0;i<n;i++){
            a[L[i]]++; a[R[i]+1]--;
        }
        int maxi=a[0];
        for(int i=0;i<=maxx;i++) {
            a[i]+=a[i-1];
            if(a[i]>maxi){
                maxi=a[i]; ans=i;
            }
        }
        return ans;  
