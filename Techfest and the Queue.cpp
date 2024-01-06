// https://www.geeksforgeeks.org/problems/techfest-and-the-queue1044/1

class Solution {
public:
	int sumOfPowers(int a, int b){
	    // Code here
	int ans=0;
	vector<int> arr(b+1,1);
        //Sieve of Eratosthenos
	for(int i=2;i<=b;i++) if(arr[i]){
	    for(long long j=1LL*i*i;j<=b;j+=i) arr[j]=0;
	}
        //Now we store counts
	for(int i=2;i<=b;i++) if(arr[i]){
	    for(long long val=i;val<=b;val*=i){
	        ans+=b/val - (a-1)/val;
	    }
	}
       return ans;

	}
};
