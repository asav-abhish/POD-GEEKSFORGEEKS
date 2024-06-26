// https://www.geeksforgeeks.org/problems/k-closest-elements3619/1

class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        vector<int>res;
        auto cmp = [x](int a, int b) {
            if (std::abs(a - x) == std::abs(b - x)) {
                return a > b;
            }
            return std::abs(a - x) < std::abs(b - x);
        };

        sort(arr.begin(), arr.end(), cmp);
        for(int i=0;i<n;i++){
            if(arr[i]==x)continue;
            res.push_back(arr[i]);
            if(res.size()==k)break;
        }
        return res;
    }
};
