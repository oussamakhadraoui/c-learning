#include <bits/stdc++.h> 
using namespace std;
class TrieNode{
    public:
    TrieNode *children[26];
    int countEndWith;
    int countPrerixWith;
    TrieNode(){
        memset(children,NULL,sizeof(children));
        countEndWith=0;
        countPrerixWith=0;
    }
    bool containsKey(char c){return children[c-'a']!=NULL;}
    TrieNode *get(char c){return children[c-'a'];}
    void put(char c,TrieNode *node){children[c-'a']=node;}
    void increaseEnd(){countEndWith++;}
    void increasePrefix(){countPrerixWith++;}
    void decreaseEnd(){countEndWith--;}
    void decreasePrefix(){countPrerixWith--;}
    int getEnd(){return countEndWith;}
    int getEndPrefix(){return countPrerixWith;}
};
class Trie{
    private:TrieNode *root;
    public:

    Trie(){
        root=new TrieNode();
    }

    void insert(string &word){
        TrieNode * clone=root;
        for(char &c :word){
            if(!clone->containsKey(c))clone->put(c,new TrieNode());
            clone=clone->get(c);
            clone->increasePrefix();
        }
        clone->increaseEnd();
    }

    int countWordsEqualTo(string &word){
        TrieNode * clone=root;
        for(char &c :word){
            if(!clone->containsKey(c))return 0;;
            clone=clone->get(c);
        }
        return clone->getEnd();
    }

    int countWordsStartingWith(string &word){
        TrieNode * clone=root;
        for(char &c :word){
            if(!clone->containsKey(c))return 0;;
            clone=clone->get(c);
        }
        return clone->getEndPrefix();        
    }

    void erase(string &word){
        TrieNode * clone=root;
        for(char &c :word){
            if(!clone->containsKey(c))return;
            clone=clone->get(c);
            clone->decreasePrefix();
        }
        clone->decreaseEnd();
    }
};
