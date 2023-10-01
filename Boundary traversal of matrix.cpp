// https://practice.geeksforgeeks.org/problems/boundary-traversal-of-matrix-1587115620/1

public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        // code here
        vector<int> ans;
        if(n == 1 || m == 1) {
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < m; j++) {
                    ans.push_back(matrix[i][j]);
                }
            }
            return ans;
        }
        for(int col = 0; col < m; col++) {
            ans.push_back(matrix[0][col]);
        }
        for(int row = 1; row < n; row++) {
            ans.push_back(matrix[row][m - 1]);
        }
        for(int col = m - 2; col >= 0; col--) {
            ans.push_back(matrix[n - 1][col]);
        }
        for(int row = n - 2; row > 0; row--) {
            ans.push_back(matrix[row][0]);
        }
        return ans;
    }
