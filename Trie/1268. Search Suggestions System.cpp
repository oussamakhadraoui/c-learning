#include <bits/stdc++.h>
using namespace std;

class TrieNode {
public:
    TrieNode* children[26];
    bool isEndOfWord;
    string word;
    TrieNode() { 
        memset(children, 0, sizeof(children));
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
    vector<string>search(string &s){
        TrieNode*node=root;
        vector<string>result;
        for(char&c:s){
            if(!node->children[c-'a'])return {};
            node=node->children[c-'a'];
        }
        dfs(node, s, result);
        return result;
    };
    void dfs(TrieNode*node ,string&s,vector<string>&result){
    if(result.size()==3)return ;
    if(node->isEndOfWord)result.push_back(node->word);
    for(int c=0;c<26;c++){
        if(result.size()==3)return ;
        if(node->children[c]){
            s+=c;
            dfs(node->children[c],s,result);
            s=s.substr(0,s.size()-1);
        }
    }
}
} ;

class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        Trie *trie=new Trie();
        for(string &p:products){
            trie->add(p);
        }
        vector<vector<string>>result;
        string search="";
        for(char &c:searchWord){
            search+=c;
            result.push_back(trie->search(search));
        }
        return result;
    }
};