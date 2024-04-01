//  https://www.geeksforgeeks.org/problems/pairs-violating-bst-property--212515/1

 int merge(int low, int high, int mid, vector<int> &v)
    {
        int left = low;
        int right = mid+1;
        vector<int> temp;
        int cnt = 0;
        while(left <= mid && right <= high)
        {
            if(v[left] <= v[right])
            {
                temp.push_back(v[left]);
                left++;
            }
            else
            {
                temp.push_back(v[right]);
                right++;
                cnt += mid - left + 1;
            }
        }
        while(left <= mid)
        {
            temp.push_back(v[left]);
            left++;
        }
        while(right <= high)
        {
            temp.push_back(v[right]);
            right++;
        }
        for(int i = low; i <= high; i++)
        {
            v[i] = temp[i - low];
        }
        return cnt;
    }
    int mergesort(int low , int high, vector<int> &v)
    {
        int cnt = 0;
        
        if(low >= high)
            return cnt;
            
        int mid = (low + high)/2;
        
        cnt += mergesort(low, mid, v);
        cnt += mergesort(mid + 1, high, v);
        cnt += merge(low,high,mid,v);
        return cnt;
    }
    void inorder(Node *root, vector<int> &v)
    {
        if(root == NULL)
            return;
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
    }
    int pairsViolatingBST(int n, Node *root) {
        vector<int> v;
        inorder(root,v);
       /* for(int i = 0; i < v.size(); i++)
            cout << v[i] << " ";*/
        return mergesort(0, n-1, v);
        //return cnt;
        // your code goes here
    }

