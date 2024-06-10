//  https://www.geeksforgeeks.org/problems/nuts-and-bolts-problem0431/1

class Solution {
  public:

    void matchPairs(int n, char nuts[], char bolts[]) {
        // code here
        unordered_map<char,int>mp1;
        
        for(int i=0;i<n;i++)
        {
            ++mp1[nuts[i]];
        }
        
        unordered_map<char,int>mp2;
        
        for(int i=0;i<n;i++)
        {
            ++mp2[bolts[i]];
        }
        
        
        vector<char>vec;
        vec.push_back('!');
        vec.push_back('#');
        vec.push_back('$');
        vec.push_back('%');
        vec.push_back('&');
        vec.push_back('*');
        vec.push_back('?');
        vec.push_back('@');
        vec.push_back('^');
        
        int np=vec.size();
        
        int a=0;
        int b=0;
        for(int i=0;i<np;i++)
        {
            if(mp1[vec[i]]!=0 && a<n)
            {
                nuts[a]=vec[i];
                a++;
            }
            
            if(mp2[vec[i]]!=0 && b<n)
            {
                bolts[b]=vec[i];
                b++;
            }
        }
    }
