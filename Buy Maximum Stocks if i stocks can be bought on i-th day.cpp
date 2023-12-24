// https://www.geeksforgeeks.org/problems/buy-maximum-stocks-if-i-stocks-can-be-bought-on-i-th-day/1

class Solution {
public:
    int buyMaximumProducts(int n, int k, int price[]){
        vector <pair <int , int>> v;
        for(int i=0; i<n; i++){
            v.push_back({price[i],i+1});
            
        }
        sort(v.begin(),v.end());
        
        int ans = 0;
        
        for(auto i : v){
            int maxi = min (k/i.first, i.second);
            ans+= maxi;
            k-= i.first*maxi;
        }
        return ans;
    }
};
