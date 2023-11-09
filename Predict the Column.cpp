// https://www.geeksforgeeks.org/problems/predict-the-column/1

class Solution{
    public:
    /*Function to count zeros in each column
    * N : Number of rows and columns in array
    M is the matrix that is globally declared
    */
    int columnWithMaxZeros(vector<vector<int>>arr,int N){
        
        int cnt = -1;
        int colmax = 0;
        for(int i = 0; i<N; i++){
            int maxi = 0;
            for(int j=0; j<N; j++){
                if(arr[j][i] == 0){
                    maxi++;
                }
            }
            if(maxi > colmax){
                cnt = i;
            }
            colmax = max(maxi,colmax);
            
        }
        return cnt;
        
    }
};
