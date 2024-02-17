// https://www.geeksforgeeks.org/problems/does-array-represent-heap4345/1

class Solution{
    public:
    bool isMaxHeap(int arr[], int n)
    {
        // Your code goes here
        for(int i=n; i>1; i--)
            if(arr[i/2-1] < arr[i-1])
                return false;
        
        return true;
    }
};
