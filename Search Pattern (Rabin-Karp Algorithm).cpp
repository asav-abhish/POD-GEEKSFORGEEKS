//  https://www.geeksforgeeks.org/problems/search-pattern-rabin-karp-algorithm--141631/1

public:
        vector <int> search(string pat, string txt)
        {
            vector <int> v;
            int found = txt.find(pat);
            while (found != string::npos)
            {
                // cout << "Pattern found at index " << found << endl;
                v.push_back(found+1);
                found = txt.find(pat, found + 1);
            }
            return v;
        }
