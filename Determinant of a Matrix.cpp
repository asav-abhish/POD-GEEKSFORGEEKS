// https://www.geeksforgeeks.org/problems/determinant-of-a-matrix-1587115620/1

class Solution
{   
    public:
    //Function for finding determinant of matrix.
    int determinantOfMatrix(vector<vector<int> > matrix, int n)
    {
        if(n == 1) return matrix[0][0];
        
        int ans = 0;
        for(int k = 0;k<n;k++){
            vector<vector<int>> Inner(n-1,vector<int>(n-1));
            int p = 0;
            int q = 0;
            for(int i = 1;i<n;i++){
                for(int j = 0;j<n;j++){
                    if(j == k) continue;
                    Inner[p][q] = matrix[i][j];
                    q++;
                }
                q = 0;
                p++;
            }
            
            int del = matrix[0][k]*determinantOfMatrix(Inner,n-1);
            if(k%2 == 0){
                ans = ans + del;
            }
            else ans = ans - del;
        }
        
        return ans;
    }
};
