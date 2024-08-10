#include <bits/stdc++.h> 
using namespace std;
class Trie{
    public:
    Trie *children[26];
    bool isContain(char c){
        return children[c-'a']!=NULL;
    }
};
int countDistinctSubstrings(string &s)
{
    Trie *trie=new Trie();
    int count=0;
    for(int i =0;i<s.size();i++){
        Trie *clone=trie;
        for(int j=i;j<s.size();j++){
            if(!clone->isContain(s[j])){
                count++;
                clone->children[s[j]-'a']=new Trie();
            }
            clone=clone->children[s[j]-'a'];
        }
    }
    return count;
}