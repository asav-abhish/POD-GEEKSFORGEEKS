// https://www.geeksforgeeks.org/problems/maximum-sum-problem2211/1

public:
        int f(int n) {
            if(n == 0) return 0;
            int a = max(n / 2 , f(n/2));
            int b = max(n / 3 , f(n/3));
            int c = max(n / 4 , f(n/4));
            return max(n , a + b + c);
        }
        int maxSum(int n)
        {
            //code here.
            return f(n);
        }
