// https://www.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/1

public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        for(int i=0;i<N;i++){
            if(arr[i]>0){
                int tmp=arr[i];
                arr[i]=-1;
                while(tmp>0 && tmp<=N){
                   int t=arr[tmp-1];
                   if(arr[tmp-1]>0) arr[tmp-1]=-1;
                   arr[tmp-1]--;
                   tmp=t;
                }
            }
        }
        
        for(int i=0;i<N;i++){
            arr[i]++;
            arr[i]*=-1;
        }
        
    }
