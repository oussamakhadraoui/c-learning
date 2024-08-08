#include <bits/stdc++.h>
using namespace std;

class TrieNode {
public:
    TrieNode* children[26];
    bool isEndOfWord;
    string word;
    TrieNode() { 
        memset(children, NULL, sizeof(children));
        isEndOfWord =false;
        word="";
    }
} ;
class Trie {
public:
    TrieNode*root;

    Trie(){
        root=new TrieNode;
    }
    void add(string& s){
        TrieNode*node=root;
        for(char& c :s){
            if(!node->children[c-'a'])node->children[c-'a']=new TrieNode;
            node=node->children[c-'a'];
        }
        node->word=s;
        node->isEndOfWord=true;
    }
    bool search(string &s){
        TrieNode*node=root;
        for(char&c:s){
            if(!node->children[c-'a'])return false;
            node=node->children[c-'a'];
        }
        return node->isEndOfWord;
    }
} ;
class Solution {
public:
    Trie* trie;
    bool dfs(int start,string&s,TrieNode*root){
        if(start==s.size())return true;
        bool res=false;
        bool res2=false;
        if(root->isEndOfWord){
            TrieNode *clone=trie->root;
            res=dfs(start,s,clone);
        }
        if(root->children[s[start]-'a']) {
            res2=dfs(start+1,s,root->children[s[start]-'a']);
        }
        return res||res2;
    };
    bool wordBreak(string s, vector<string>& wordDict) {
        trie=new Trie;
        for(string &s:wordDict){
            trie->add(s);
        }
        TrieNode *root=trie->root;
        return dfs(0,s,root);
    }
};