// https://practice.geeksforgeeks.org/problems/roman-number-to-integer3201/1

class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        unordered_map<char,int> m{ {'I',1}, {'V',5}, {'X',10}, {'L',50}, {'C',100}, {'D',500}, 
        {'M',1000}};
        
        int ans = m[str.back()];
        

        
        for(int i =0; i< str.length()-1; i++){
            if(m[str[i]] < m[str[i+1]]){
                ans -= m[str[i]];
            }
            else {
                ans+= m[str[i]];
            }
        }
        
        return ans;
    }
};
