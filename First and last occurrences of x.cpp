// https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1

class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        vector <int> v;
        int i;
        for( i = 0; i<n; i++){
            if(arr[i] == x){
                v.push_back(i);
                break;
            }
        }
        for(int ii = i;ii<n;ii++){
            if(arr[ii] == x && arr[ii+1] != x){
                 v.push_back(ii);
                break;
            }
        }
        if(v.size() == 0){
              v.push_back(-1);
                  v.push_back(-1);
                
        }
        return v;
    }
};
