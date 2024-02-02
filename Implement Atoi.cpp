// https://www.geeksforgeeks.org/problems/implement-atoi/1


class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        int l = s.length();
        int ans = 0;
        
        if (s[0] == '-' || s[0] == '0'){
            for(int i = 1; i< l; i++){
                if(s[i] >= '0' && s[i] <= '9'){
                    int ch = s[i] - '0';
                    ans = ans * 10 +  ch ;
                }
                else return -1;
            }
            if(s[0] == '-'){
                return -ans;
            }
            else{
                return ans;
            }
        }
        else{
            for(int i = 0; i< l; i++){
                if(s[i] >= '0' && s[i] <= '9'){
                    int ch = s[i] - '0';
                    ans = ans * 10 +  ch ;
                }
                else return -1;
            }
            return ans;
        }
    }
};
