// https://www.geeksforgeeks.org/problems/largest-subsquare-surrounded-by-x0558/1

class Solution {
  public:
    int largestSubsquare(int n, vector<vector<char>> a) {
        // code here
         vector<vector<int>> rig(n,vector<int>(n,0));
        vector<vector<int>> bot(n,vector<int>(n,0));
        
        for(int c=n-1;c>=0;c--){
            int cnt=0;
            for(int r=n-1;r>=0;r--){
                if(a[r][c]=='X'){
                    cnt++;
                }else{
                    cnt=0;
                }
                bot[r][c]=cnt;
            }
        }
        
        for(int r=0;r<n;r++){
            int cnt=0;
            for(int c=n-1;c>=0;c--){
                if(a[r][c]=='X'){
                    cnt++;
                }else{
                    cnt=0;
                }
                rig[r][c]=cnt;
            }
        }
        
        int ans=0;
        
        for(int r=0;r<n;r++){
            for(int c=0;c<n;c++){
             if(a[r][c]!='O'){
                int mini=min(bot[r][c],rig[r][c]); 
               while(mini>0){
                
                int a1=r+mini-1 ,a2=c;
                int b1=r ,b2=c+mini-1;
                int v1=rig[a1][a2],v2=bot[b1][b2];
                    if(min(v1,v2)>=mini){
                         ans=max(ans,mini);
                         break;
                    }else{
                        mini--;
                    }
               }
             }
            }
        }
        
        return ans;
    }
};
