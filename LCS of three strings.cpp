//  https://www.geeksforgeeks.org/problems/lcs-of-three-strings0028/1

private:
        int dp[21][21][21];
    private:
        int hlper(int i1, int i2, int i3, string a, string b, string c) {
            if(i1 == a.size() || i2 == b.size() || i3 == c.size()) return 0;
            
            /*
                WAYS :: 

                i+1, i+1, i+1
                
                i i+1 i+1
                i+1 i i+1
                i+1 i+1 i
                i i i+1
                i i+1 i
                i+1 i i
            */
            if(dp[i1][i2][i3] != -1) return dp[i1][i2][i3];
            
            int ans = INT_MIN;
            if(a[i1] == b[i2] && b[i2] == c[i3]) {
                ans = max(ans, 1+hlper(i1+1, i2+1, i3+1, a,b,c));
            }
            ans = max(ans, hlper(i1, i2+1, i3+1, a,b,c));
            ans = max(ans, hlper(i1+1, i2, i3+1, a,b,c));
            ans = max(ans, hlper(i1+1, i2+1, i3, a,b,c));
            ans = max(ans, hlper(i1, i2, i3+1, a,b,c));
            ans = max(ans, hlper(i1, i2+1, i3, a,b,c));
            ans = max(ans, hlper(i1+1, i2, i3, a,b,c));
            
            return dp[i1][i2][i3] = ans;
        }
