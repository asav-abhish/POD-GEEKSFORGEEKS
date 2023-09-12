// https://practice.geeksforgeeks.org/problems/perfect-numbers3207/1

public:
    int isPerfectNumber(long long N) {
        // code here
        
        if(N==1){
            return 0;
        }
        long long sum = 1;
        for(long long i = 2; i<=sqrt(N); i++){
            if(N%i==0){
                sum+=i;
                sum+=(N/i);
            }
            
        }
        
        if(sum == N) return 1;
        
        else return 0;
    }
