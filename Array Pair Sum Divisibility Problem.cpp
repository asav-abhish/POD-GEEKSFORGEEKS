// https://www.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem3257/1

class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        if(nums.size()%2==1) return false;
        
        map<int,int> m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]%k]++;
        } 
        bool ans=true;
        for(int i=1; i<k; i++) {
            if(m[i]!=m[k-i]) {
                ans=false; 
                break;
            }
        }
        return ans;
   }
}
