// https://practice.geeksforgeeks.org/problems/print-adjacency-list-1587115620/1

  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int,int>>edges) {
    vector<vector<int>>ans(V);
        for (auto it:edges){
            int ind=it.first;
            int ele=it.second;
            ans[ind].push_back(ele);
            ans[ele].push_back(ind);
        }
        return ans;
    }
