//  https://www.geeksforgeeks.org/problems/paths-to-reach-origin3850/1

class Solution
{
public:
    int mod = 1000000007;
    long long modinverse(int n)
    {
        return power(n,mod-2);
    }
    long long power(int a, int b)
    {
        if(b==0) return 1;
        long long ans = power(a,b/2);
        ans = (ans*ans)%mod;
        if(b%2!=0) ans = (ans*a)%mod;
        return ans;
    }
    int ways(int x, int y)
    {
        int n = x+y;
        int r = min(x,y);
        long long num = 1;
        long long den = 1;
        for(int i=1;i<=r;i++)
        {
            num = (num*n)%mod;
            den = (den*i)%mod;
            n--;
        }
        return (num*modinverse(den))%mod;
    }
};
