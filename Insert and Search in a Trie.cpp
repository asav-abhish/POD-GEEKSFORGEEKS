// https://www.geeksforgeeks.org/problems/trie-insert-and-search0651/1

class Solution
{
    public:
        //Function to insert string into TRIE.
        void insert(struct TrieNode *root, string key)
        {
            if(key.length() == 0) {
                root -> isLeaf = true;
                return;
            }
            
            struct TrieNode* child;
            
            
            if(root -> children[CHAR_TO_INDEX(key[0])] != NULL) {
                child = root -> children[CHAR_TO_INDEX(key[0])];
            } else {
                child = getNode();
                root -> children[CHAR_TO_INDEX(key[0])] = child;
            }
            
            insert(child, key.substr(1));
        }
        
        
        //Function to use TRIE data structure and search the given string.
        bool search(struct TrieNode *root, string key) 
        {
            // code here
            if(key.length() == 0) {
                return root -> isLeaf;
            }
            
            struct TrieNode* child;
            
            if(root -> children[CHAR_TO_INDEX(key[0])] != NULL) {
                child = root -> children[CHAR_TO_INDEX(key[0])];
            } else {
                return false;
            }
            
            return search(child, key.substr(1));
        }
};
