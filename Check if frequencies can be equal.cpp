// https://www.geeksforgeeks.org/problems/check-frequencies4211/1

class Solution{
public:	
	bool sameFreq(string s)
	{
	    // code here 
	     unordered_map<int,int>f,g;
    for(auto c:s)f[c]++;
    for(auto p:f)g[p.second]++;
    
    if(g.size()==1)return true;
    if(g.size()>2)return false;
    int a=0,af=0,b=0,bf=0;
    for(auto p:g){
        if(af==0)a=p.first,af=p.second;
        else b=p.first,bf=p.second;
    }
    
    if(af==1)return (a-1==b or a-1==0);
    return bf==1?(b-1==a or b-1==0):0;
	}
};
