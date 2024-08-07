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
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
class Solution {
public:
    int n ,m;
    Trie *trie;
    bool vis[12][12];
    unordered_set<string>result;
    bool isOk(int i ,int j){
        return i>=0&&j>=0&&i<n&&j<m;
    }
    void dfs(int i ,int j,vector<vector<char>>& b,TrieNode*node){
        if(node->isEndOfWord){
            result.insert(node->word);
        }
        vis[i][j]=1;
        for(int x=0;x<4;x++){
            int row=dx[x]+i;
            int col=dy[x]+j;
            char c=b[row][col];
            if(isOk(row,col)&&!vis[row][col]&&node->children[c-'a']){
                dfs(row,col,b,node->children[c-'a']);
            }
        };
        vis[i][j]=0;
    }
    vector<string> findWords(vector<vector<char>>& b,vector<string>& words) {
        this->n=b.size();
        this->m=b[0].size();
        trie= new Trie();
        for(string &s:words){
            trie->add(s);
        }
        TrieNode *Tree=trie->root;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(Tree->children[b[i][j]-'a']){
                    dfs(i,j,b,Tree->children[b[i][j]-'a']);
                }
            }
        };
        return vector<string>(result.begin(),result.end());
    }
};