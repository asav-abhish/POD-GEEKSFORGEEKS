// https://www.geeksforgeeks.org/problems/find-duplicate-rows-in-a-binary-matrix/1

class Solution
{   
    public:
    vector<int> repeatedRows(vector<vector<int>> &matrix, int M, int N) 
    { 
    set < vector<int> > st;
      vector<int> v;
      for(int i = 0; i<M; i++){
          if(st.find(matrix[i]) ){
              v.push_back(i);
          }
        else{
            st.insert(matrix[i]);
        }
      }
      return v;
    } 
};
