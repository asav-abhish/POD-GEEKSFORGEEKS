// https://www.geeksforgeeks.org/problems/pangram-checking-1587115620/1

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        // your code here
        long long num =0;
        for(auto it:s){
            
            if(it<'a'){
                it += 32;
            }
            if(it-'a'<0 || it-'a'>=26){
                continue;
            }
            num |= (1<<(it-'a'));
        }
        num++;
        long long ans = (1<<(26));
        return (num == ans);
    }
};
