// https://practice.geeksforgeeks.org/problems/find-optimum-operation4504/1

 public:
    int minOperation(int n)
    {
        int c = 0;
        while(n>0){
            if(n%2==0){
                n = n/2;
            }
            else{
                n--;
            }
            c++;
        }
        return c;
    }
