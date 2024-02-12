// https://www.geeksforgeeks.org/problems/recursive-sequence1611/1

class Solution{
public:
    long long sequence(int n){
        // code here
        long long cnt=1;
        long long res=0;
        for(int i=0;i<n;i++){
            long long prod=1;
            for(int j=0;j<=i;j++){
                prod=(prod*cnt)%1000000007;
                cnt++;
            }
            
            res=(res+prod)%1000000007;
        }
        return res;
    }
};
