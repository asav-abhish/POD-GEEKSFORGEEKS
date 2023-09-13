// https://practice.geeksforgeeks.org/problems/largest-number-possible5028/1

class Solution{
public:
    string findLargest(int N, int S){
        // code here
        string s = "";
   
        if(N*9 < S || S == 0 && N > 1){
            return "-1";
        }
        
        for(int i = 0; i<N; i++){
            if(S >= 9){
                s += "9";
                S -= 9;
            }
            else{
                s += to_string(S);
                S = 0;
            }
        }
        return s;
    }
};
