//  https://www.geeksforgeeks.org/problems/sum-of-products5049/1

class Solution {
  public:
    long long pairAndSum(int n, long long arr[]) {
        // code here
        vector<int> v(32,0);
        long long ans=0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<32;j++) {
                if(arr[i] & (1 << j)){
                    ans += v[j] * (1LL << j); // Using left shift operator to calculate power of 2
                    v[j]++;
                }
            }
        }
        return ans;
        }
};
