// https://www.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1

class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    int j = 0;
	    for(int i = 0; i<n;i++){
	        if(arr[i] > 0){
	            arr[j++] = arr[i];
	        }
	    }
	    for(int h = j; h<n; h++){
	        arr[h] = 0;
	    }
	}
};
