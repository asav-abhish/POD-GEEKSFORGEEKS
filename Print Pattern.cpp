// https://www.geeksforgeeks.org/problems/print-pattern3549/1

class Solution{
public:
    void fun(int N, vector<int> &v){
        if (N <= 0) {
            v.push_back(N);
            return;
        }
        v.push_back(N);
        fun(N-5, v);
        
    }
    
    void funp(int a,vector<int> &v, int N){
        if( a >= N){
            v.push_back(a);
            return;
        }
         v.push_back(a);
         funp(a+5,v,N);
    }
    
    
    vector<int> pattern(int N){
        vector <int> s;
        s.push_back(0);
        if (N==0) return s;
        
        if (N < 0) {
            s.pop_back();
            s.push_back(N);
            return s;
        }
        vector<int> v;
        
        fun(N,v);
        int a = v[v.size()-1];
        funp(a+5,v,N);
        return v;
    }
};
