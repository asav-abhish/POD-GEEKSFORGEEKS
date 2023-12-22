// https://www.geeksforgeeks.org/problems/maximum-meetings-in-one-room/1

class Solution{
public:
    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F){
        vector<pair<int,int>>mp;
        int n=N;
        
        for(int i=0;i<n;++i)
        {
            mp.push_back({F[i],i});
        }
       
        sort(mp.begin(),mp.end());
        vector<int>ans;
        ans.push_back(mp[0].second+1); 
        int finish=mp[0].first;
        for(int i=1;i<n;++i){
            
            if(S[mp[i].second]>finish){
                ans.push_back(mp[i].second+1);
                finish=mp[i].first;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
   }
