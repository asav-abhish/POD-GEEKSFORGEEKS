//  https://www.geeksforgeeks.org/problems/pythagorean-triplet3018/1

class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	map<int,int>mp;
    int x=1;
    for(int i=0;i<n;i++){
        x=arr[i]*arr[i];
        mp[x]++;
    }
    
    for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
           if(mp.count(arr[i]*arr[i] + arr[j]*arr[j])){
               return true;
           }
       }
    }
    
    return false;

	}
};
