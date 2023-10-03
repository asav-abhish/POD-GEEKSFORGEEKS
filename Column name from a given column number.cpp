// https://practice.geeksforgeeks.org/problems/column-name-from-a-given-column-number4244/1

public:
    string colName (long long int n)
    {
        // your code here
        string ans = "";
        
        while(n > 0){
            int x = (n-1)%26;
            ans = char('A' + x) + ans;
            n = (n-1)/26;
        }
        
        return ans;
    }
