// https://www.geeksforgeeks.org/problems/max-sum-without-adjacents2430/1

class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    // code here
	    if (n == 1) return arr[0];
        
        for (int i = n - 3; i >= 0; i--) {
            arr[i] += arr[i + 2];
            arr[i + 1] =  max(arr[i + 1], arr[i + 2]);
        }
        
        return max(arr[0], arr[1]);
	}
};
