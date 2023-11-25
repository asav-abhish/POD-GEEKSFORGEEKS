// https://www.geeksforgeeks.org/problems/shuffle-integers2401/1

class Solution{
	
	
	
	public:
	void fun(int arr[], int i, int j,int n){
	    if(n <= 0){
	        return;
	    }
	    int a = arr[i];
	    int b = arr[j];
	    fun(arr,i-1,j-1,n - 2);
	    arr[n-2] = a;
	    arr[n-1] = b;
	    
	}
	void shuffleArray(int arr[],int n)
	{
	    fun(arr,n/2-1, n-1,n);
	}
		 

};
