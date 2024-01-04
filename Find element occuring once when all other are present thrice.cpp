// https://www.geeksforgeeks.org/problems/find-element-occuring-once-when-all-other-are-present-thrice/1

class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        // code here
      int freq[32];
      memset(freq,0,sizeof(freq));
      for(int i=0;i<N;i++){
          for(int j=31;j>=0;j--){
              if((1<<j) & arr[i])
              freq[j]++;
          }
      }
      int ans=0;
      for(int i=0;i<32;i++){
          if(freq[i]%3==1){
              ans|=(1<<i);
          }
      }
      return ans;
    }
};
