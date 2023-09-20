// https://practice.geeksforgeeks.org/problems/rotate-bits4524/1

public:
    void left(vector<int>&v, int n, int d){
        v.push_back( ((n << d) | n >> (16 - d)) & 65535 );
    }
    
    void right(vector<int>&v, int n, int d){
        v.push_back((( n >> d) | n << (16 - d) ) & 65535  );
    }
        vector <int> rotate (int n, int d)
        {
            d = d%16;
            vector <int> v;
            left(v,n,d);
            right(v,n,d);
            
            return v;
        }
