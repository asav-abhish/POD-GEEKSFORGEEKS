// https://www.geeksforgeeks.org/problems/rightmost-different-bit-1587115621/1

class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        if ( n == m) return -1;
        int ans = 1;
        while(m > 0 || n > 0){
            if( (m & 1) != (n & 1) ){
                return ans;
            }
            ans++;
            m = m >> 1;
            n = n >> 1;
            
        }
        return ans;
    }
};
