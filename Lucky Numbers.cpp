// https://practice.geeksforgeeks.org/problems/lucky-numbers2911/1

class Solution{
public:
    bool isLucky(int n) {
        // code here
        for(int i = 2; i<=n; i++){
            if(n % i == 0){
                return 0;
            }
            n = n - n/i;
        }
        return 1;
    }
};
