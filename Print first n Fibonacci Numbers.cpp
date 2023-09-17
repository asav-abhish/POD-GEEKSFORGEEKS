// https://practice.geeksforgeeks.org/problems/print-first-n-fibonacci-numbers1002/1

class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        //code here
        vector <long long> v;
        long long a = 1;
        long long b = 1;
        for(long long i = 1; i <= n; i++){
            
            v.push_back(a);
            long long int c =  a + b;
            a = b;
            
            
            b = c;
        }
        return v;
    }
};
