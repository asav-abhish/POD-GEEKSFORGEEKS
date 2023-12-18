// https://www.geeksforgeeks.org/problems/reach-the-nth-point5433/1

class Solution{
	public:
		int nthPoint(int n){
		   int arr[n+1];
		   
		   arr[0] = 1;
		   arr[1] = 1;
		   for(int i = 2; i<= n; i++){
		       arr[i] = (arr[i-1] + arr[i-2]) % 1000000007;
		   }
		   return arr[n];
		}
};
