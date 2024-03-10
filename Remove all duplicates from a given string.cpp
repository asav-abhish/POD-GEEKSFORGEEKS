//  https://www.geeksforgeeks.org/problems/remove-all-duplicates-from-a-given-string4321/1

class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	    set<char> st;
        string result = "";

        for(char ch: str){
            if(st.find(ch) == st.end()){
                result += ch;
                st.insert(ch);
            }
        }
        return result;
	}
};
