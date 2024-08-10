#include <bits/stdc++.h>
using namespace std;

class TrieNode {
public:
    TrieNode* links[2];
    TrieNode() {
        links[0] = links[1] = nullptr;
    }
};

class Trie {
public:
    TrieNode* root;
    
    Trie() {
        root = new TrieNode();
    }

    void insert(int num) {
        TrieNode* node = root;
        for (int i = 31; i >= 0; i--) {
            int bit = (num >> i) & 1;
            if (node->links[bit] == nullptr) {
                node->links[bit] = new TrieNode();
            }
            node = node->links[bit];
        }
    }

    int findMaxXOR(int num) {
        TrieNode* node = root;
        int maxXOR = 0;
        for (int i = 31; i >= 0; i--) {
            int bit = (num >> i) & 1;
            if (node->links[1 - bit] != nullptr) { // Choose the opposite bit if possible
                maxXOR |= (1 << i);
                node = node->links[1 - bit];
            } else {
                node = node->links[bit];
            }
        }
        return maxXOR;
    }
};

int maxXOR(int n, int m, vector<int>& arr1, vector<int>& arr2) {
    Trie trie;
    for (int num : arr2) {
        trie.insert(num);
    }

    int result = 0;
    for (int num : arr1) {
        result = max(result, trie.findMaxXOR(num));
    }

    return result;
}