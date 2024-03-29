// https://www.geeksforgeeks.org/problems/euler-circuit-in-a-directed-graph/1

public:
	bool isEularCircuitExist(int v, vector<int>adj[]){
	    
	    vector<int> ind(v,0);
        for(int i =0;i<v;i++){
            for(auto z : adj[i]){
                ind[z]++;
            }
        }
        for(int j =0;j <v;j++){
            if (ind[j]%2){
                return false;
            }
        }
        return true;
	}
