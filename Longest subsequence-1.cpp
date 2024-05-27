//  https://www.geeksforgeeks.org/problems/longest-subsequence-such-that-difference-between-adjacents-is-one4724/1

class Solution {
  public:
    int longestSubseq(int n, vector<int> &a) {
        
        unordered_map<int,int>mp;
        int maxi=0,b,c;
        for(auto i:a)
        {
            b=i-1,c=i+1;
            mp[i]=max(mp[b],mp[c])+1;
            maxi=max(maxi,mp[i]);
        }
        return maxi;
    }
};
