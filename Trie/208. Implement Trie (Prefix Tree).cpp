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
        root=new TrieNode();
    }
    
    void insert(string word) {
        TrieNode *curr=root;
        for(char&c:word){
            if(!(curr->childNode[c-'a']))curr->childNode[c-'a']=new TrieNode;
            curr=curr->childNode[c-'a'];
        }
        curr->isEndOfWord=true;
    }
    
    bool search(string word) {
        TrieNode *curr=root;
        for(char&c:word){
            if(!(curr->childNode[c-'a']))return false;
            curr=curr->childNode[c-'a'];
        }
        if(curr->isEndOfWord==true)return true;
        return false;
    }
    
    bool startsWith(string word) {
         TrieNode *curr=root;
        for(char&c:word){
            if(!(curr->childNode[c-'a']))return false;
            curr=curr->childNode[c-'a'];
        }
        return true;       
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */