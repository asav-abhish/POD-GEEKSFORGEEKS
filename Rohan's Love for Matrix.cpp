// https://www.geeksforgeeks.org/problems/rohans-love-for-matrix4723/1

class Solution {
  public:
    int firstElement(int n) {
        // code here
        int a = 0, b = 1, c, i;
        for (i = 2; i <= n; i++) {
            c = a + b;
            a = b%1000000007;//using mod to not hit the max of int 
            b = c%1000000007;
        }
        return b;
    }
};
