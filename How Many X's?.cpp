// How Many X's?
// https://www.geeksforgeeks.org/problems/how-many-xs4514/1

class Solution {
  public:
    int countX(int L, int R, int X) {
        // code here
        int ans = 0;
        for(int i = L+1; i<R; i++){
            int cu = i;
            while(cu > 0){
                int ld = cu % 10;
                if(ld == X){
                    ans++;
                }
                cu/=10;
            }
            
        }
        return ans;
    }
};
