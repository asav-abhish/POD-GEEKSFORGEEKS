// https://www.geeksforgeeks.org/problems/isomorphic-strings-1587115620/1

public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        if(str1.length() != str2.length())
        {
            return false;
        }
        map<char,char>mymap;
        map<char,char>mymap2;
        
            for(int i = 0; i < str1.length(); i++){
                mymap[str1[i]]=str2[i];
                mymap2[str2[i]]=str1[i];
                
            }
            for(int i = 0; i < str1.length(); i++){
                if(mymap[str1[i]]!=str2[i] || mymap2[str2[i]] !=str1[i]){
                    return false;
                }
            }
        return true;
        
