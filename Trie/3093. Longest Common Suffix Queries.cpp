#include <bits/stdc++.h> 
using namespace std;
class TrieNode{
    public:
    TrieNode *children[26];
    int index;
    int length;
    TrieNode(){
        memset(children,NULL,sizeof(children));
        index=INT_MAX;
        length=INT_MAX;
    }
};
class Trie{
    public:
    TrieNode *root;
    Trie(){
        root=new TrieNode();
    }
    void add(int index,string s){
        TrieNode *clone= root;
        int length=s.size();
        reverse(s.begin(),s.end());
        for(char& c:s){
            if(!clone->children[c-'a']){
                clone->children[c-'a']=new TrieNode();
            }
            clone=clone->children[c-'a'];
            if(clone->length>length){
                clone->length=length;
                clone->index=index;
            }else if(clone->length==length){
                clone->index=min(index,clone->index);
            }
        };
        
    }
    int search(string s){
        TrieNode *clone=root;
        reverse(s.begin(),s.end());
        int result=clone->index;
        for(char &c:s){
            if(!clone->children[c-'a']){
                return result;
            }
            clone=clone->children[c-'a'];
            result=clone->index;
        }
        return result;
    }
};
class Solution {
public:
    vector<int> stringIndices(vector<string>& wordsContainer, vector<string>& wordsQuery) {
        Trie *trie=new Trie();
        int smallIndex=INT_MAX;
        int lenString=INT_MAX;
        for(int i=0;i<wordsContainer.size();i++){
            trie->add(i,wordsContainer[i]);
            if(wordsContainer[i].size()<lenString){
                lenString=wordsContainer[i].size();
                smallIndex=i;
            }else if(lenString==wordsContainer[i].size()){
                smallIndex=min(smallIndex,i);
            }
        }
        TrieNode *root=trie->root;
        root->index=smallIndex;
        root->length=lenString;
        vector<int>result;
        for(string &s:wordsQuery){
            result.push_back(trie->search(s));
        }
        return result;
    }
};