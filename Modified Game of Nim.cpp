// https://www.geeksforgeeks.org/problems/variation-in-nim-game4317/1

class Solution{
public:
    int findWinner(int n, int A[]){
        // code here
        int num = 0;
        for(int i = 0; i<n; i++){
            num = num ^ A[i];
        }
        if(num == 0) return 1;
        if(n % 2 == 0) return 1;
        return 2;
    }
};
