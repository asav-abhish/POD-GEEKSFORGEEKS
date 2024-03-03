// https://www.geeksforgeeks.org/problems/largest-number-formed-from-an-array1117/1 

class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	static bool cmp(string& a, string& b){
        return (a+b > b+a);
    }
    
	string printLargest(int n, vector<string> &arr) {
	    // code here
	    sort(arr.begin(), arr.end(), cmp);
        
        // Concatenating the sorted strings to form the largest number
        string ans = "";
        for(int i = 0; i < n; i++)
            ans += arr[i];

        // Returning the final result as a string
        return ans;
	}
};
