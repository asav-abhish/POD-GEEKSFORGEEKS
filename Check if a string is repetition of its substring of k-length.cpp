//  https://www.geeksforgeeks.org/problems/check-if-a-string-is-repetition-of-its-substring-of-k-length3302/1

class Solution{
public:
	
	int kSubstrConcat (int n, string s, int k)
	{
	    if(n%k) return 0;
        
        unordered_map<string,int> mp;
        for(int i=0;i<s.size();i=i+k){
            string tmp = s.substr(i,k);
            mp[tmp]++;
        }
        if(mp.size()==1) return 1;
        if(mp.size()==2){
            for(auto it:mp){
                if(it.second==1){
                    return 1;
                }
            }
        }
        return 0;
	}
};
