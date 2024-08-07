#include <bits/stdc++.h>

using namespace std;

class TrieNode {
public:
    TrieNode *childNode[26];
    bool isEndOfWord;

    TrieNode() {
        isEndOfWord = false;
        for (auto &a : childNode) a = nullptr;
    }
};

class Trie {
public:
    TrieNode *root;

    Trie() {
        root = new TrieNode();
    }

    void insert(const string &word) {
        TrieNode *curr = root;
        for (char c : word) {
            if (!curr->childNode[c - 'a']) {
                curr->childNode[c - 'a'] = new TrieNode();
            }
            curr = curr->childNode[c - 'a'];
        }
        curr->isEndOfWord = true;
    }

    bool search(const string &word) {
        TrieNode *curr = root;
        for (char c : word) {
            if (!curr->childNode[c - 'a']) {
                return false;
            }
            curr = curr->childNode[c - 'a'];
        }
        return curr->isEndOfWord;
    }

    bool startsWith(const string &prefix) {
        TrieNode *curr = root;
        for (char c : prefix) {
            if (!curr->childNode[c - 'a']) {
                return false;
            }
            curr = curr->childNode[c - 'a'];
        }
        return true;
    }
};
/////////////////////////////////////////////////////////////////////////////////////////////////
// Example
int main() {
    Trie trie;

    // Insert words into the Trie
    trie.insert("apple");
    trie.insert("app");
    trie.insert("banana");
    trie.insert("band");
    trie.insert("bandana");

    // Search for words in the Trie
    cout << boolalpha; // Print true/false instead of 1/0
    cout << "Search for 'apple': " << trie.search("apple") << endl; // Output: true
    cout << "Search for 'app': " << trie.search("app") << endl;     // Output: true
    cout << "Search for 'appl': " << trie.search("appl") << endl;   // Output: false
    cout << "Search for 'banana': " << trie.search("banana") << endl; // Output: true
    cout << "Search for 'band': " << trie.search("band") << endl;   // Output: true
    cout << "Search for 'bandana': " << trie.search("bandana") << endl; // Output: true
    cout << "Search for 'ban': " << trie.search("ban") << endl;     // Output: false

    // Check if any word starts with a given prefix
    cout << "Starts with 'app': " << trie.startsWith("app") << endl; // Output: true
    cout << "Starts with 'ban': " << trie.startsWith("ban") << endl; // Output: true
    cout << "Starts with 'band': " << trie.startsWith("band") << endl; // Output: true
    cout << "Starts with 'banda': " << trie.startsWith("banda") << endl; // Output: true
    cout << "Starts with 'bandan': " << trie.startsWith("bandan") << endl; // Output: true
    cout << "Starts with 'bandanas': " << trie.startsWith("bandanas") << endl; // Output: false
    cout << "Starts with 'cat': " << trie.startsWith("cat") << endl;   // Output: false

    return 0;
}
