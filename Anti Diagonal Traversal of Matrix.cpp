// https://www.geeksforgeeks.org/problems/print-diagonally1623/1

class Solution {
  public:
    vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
    {
        int n=matrix.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            int x=0;
            int y=i;
            while(x<=i){
                ans.push_back(matrix[x][y]);
                x++;y--;
            }
        }
        for(int i=1;i<n;i++){
            int y=n-1;
            int x=i;
            while(x<=(n-1)){
                ans.push_back(matrix[x][y]);
                x++;y--;
            }
        }
        return ans;
    
