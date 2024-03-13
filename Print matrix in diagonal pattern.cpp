// https://www.geeksforgeeks.org/problems/print-matrix-in-diagonal-pattern/1

class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
        int i=0, j=0, n = mat.size();
        vector<int> ans;
        bool right = true;
        
        while(i < n && j < n) {
            ans.push_back(mat[i][j]);
            
            if(right) {
                if(i-1 >= 0 && j+1 < n) {
                    i--; j++;
                } else {
                    right = false;
                    j+1 < n ? j++ : i++;
                }
            } else {
                if(j-1 >= 0 && i+1 < n) {
                    j--; i++;
                } else {
                    right = true;
                    i+1 < n ? i++ : j++;
                }
            }
        }
        
        return ans;
         
    }
};
