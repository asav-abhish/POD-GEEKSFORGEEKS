https://www.geeksforgeeks.org/problems/winner-of-an-election-where-votes-are-represented-as-candidate-names-1587115621/1

public:
  
    vector<string> winner(string arr[],int n)
    {
        
        for(int i=0; i<n; i++)m[arr[i]]++;
        
        int cnt=0;
        string s;
        for(auto it:m){
            if(it.second>cnt){
                s=it.first;
                cnt=it.second;
            }
            else if(it.second==cnt and it.first<s){
                s=it.first;
            }
        }
        
        vector<string>res;
        string ss=to_string(cnt);
        res.push_back(s);
        res.push_back(ss);
        
        return res;
    }
