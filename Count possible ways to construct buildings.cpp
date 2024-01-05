// https://www.geeksforgeeks.org/problems/count-possible-ways-to-construct-buildings5007/1

class Solution{
	public:
	int TotalWays(int N)
	{
	    long long mod = 1e9+7, a = 2, b = 3;
	     if(N==1) return 4;
	      if(N==2) return 9;
	      long c = 0;
	      for(int  i = 3; i<=N; i++){
	          c = (a + b ) % mod;
	          a = b;
	          b = c;
	      }
	      return (int) ((c*c) % mod);
	}
};
