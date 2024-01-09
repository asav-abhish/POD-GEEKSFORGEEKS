// https://www.geeksforgeeks.org/problems/search-pattern0205/1

class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            vector <int> v;
            for(int i = 0; i<txt.length(); i++){
                if(pat[0] == txt[i]){
                    string s = txt.substr(i,pat.length());
                    if(s == pat) v.push_back(i+1);
                }
            }
            return v;
        }
     
};
