// https://www.geeksforgeeks.org/problems/smallest-window-containing-0-1-and-2--170637/1 

class Solution {
  public:
    int smallestSubstring(string S) {
        // Code here
        int l = S.length();
        int a = -1, b = -1,c = -1;
        int ans = INT_MAX;
        for(int i = 0; i< l; i++){
            if(S[i] == '0'){
                a = i;
            }
            else if(S[i] == '1'){
                b = i;
            }
            else if(S[i] == '2'){
                c = i;
            }
            
            if (a == -1 || b == -1 || c == -1){
                continue;
            }
            
            int maxi = max({a,b,c});
            int mini = min({a,b,c});
            ans = min (ans, maxi-mini + 1 );
        }
        
        return ans == INT_MAX ? -1 : ans;
    }
};
