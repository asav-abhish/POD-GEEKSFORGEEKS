// https://practice.geeksforgeeks.org/problems/number-of-enclaves/1

 int dx[4]={-1,0,1,0};
 int dy[4]={0,1,0,-1};
class Solution {
  public:
   public:
  void dfs(int i,int j,int n,int m,vector<vector<int>>&grid){
      if(grid[i][j]==1){
          grid[i][j]=0;
      }
      for(int k=0;k<4;k++){
          int nrow=i+dx[k];
          int ncol=j+dy[k];
          if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]==1){
                dfs(nrow,ncol,n,m,grid);
          }
      }
  }
    int numberOfEnclaves(vector<vector<int>> &grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(((i==0|| i==n-1 || j==0 || j==m-1))&& grid[i][j]==1 ){
                    dfs(i,j,n,m,grid);
                }
            }
        }
        int cnt=0;
            for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){ 
                // cout<<grid[i][j];
              if(grid[i][j]==1){
               
                  cnt++;
              }
            }
            // cout<<endl;
        }
        return cnt;
    }
};
