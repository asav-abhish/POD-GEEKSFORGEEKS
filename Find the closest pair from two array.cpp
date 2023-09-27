// https://practice.geeksforgeeks.org/problems/find-the-closest-pair-from-two-arrays4215/1

class Solution{
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
        //code here
        int s = 0;
        int e = m-1;
        
        int ele1 = INT_MIN;
        int ele2 = INT_MIN;
        int closediff =  INT_MAX;
        
        while(s < n && e >= 0){
            int sum = arr[s] + brr[e];
            int difference = abs(sum-x);
            
            if(difference < closediff){
                closediff = difference;
                ele1 = arr[s];
                ele2 = brr[e];
            }
            if(sum > x){
                e--;
            }
            else{
                s++;
            }
        }
        vector <int> v;
        v.push_back(ele1);
        v.push_back(ele2);
        
        return v;
    }
};
