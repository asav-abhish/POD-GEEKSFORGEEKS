//  https://www.geeksforgeeks.org/problems/sum-of-prime4751/1

class Solution {
  public:
    vector<int> getPrimes(int n) {
        // code here
        vector<int> ans;
        
      if(n<=3)
      return {-1,-1};
   set<int> primes;
    primes.insert(2);
    primes.insert(3);
    primes.insert(5);
    primes.insert(7);

  for (int i = 11; i < n; i += 2) {
        bool isPrime = true;
        for (int j = 3; j * j <= i; j += 2) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            primes.insert(i);
    }
  

    for (int prime : primes) {
        int complement = n - prime;
        if (primes.count(complement)) {

             ans.push_back(prime);
            ans.push_back(complement);
            return ans;
           }

        }

    return {-1, -1};
    }
};
