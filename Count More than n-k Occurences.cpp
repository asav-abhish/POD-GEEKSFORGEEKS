// https://www.geeksforgeeks.org/problems/count-element-occurences/1

class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        // Your code here
        int mark = n/k;
        int ans = 0;
        unordered_map <int,int> m;
        for(int i =0; i<n; i++){
            m[arr[i]]++;
        }
        
        for(auto i : m){
            if(i.second > mark) ans++;
        }
        return ans;
    }
};
