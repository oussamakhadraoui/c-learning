 #include <bits/stdc++.h>
 using namespace std;
 class Solution {
public:
    bool checkValidString(string s) {
        stack<char>indexOfOpen;
        stack<char>indexOfStar;
        int countOfStart=0;
        for( int i =0;i<s.size();i++){
            char c=s[i];
            if(c=='*')indexOfStar.push(i);
            else if(c=='(')indexOfOpen.push(i);
            else if(c==')'){
              if(!indexOfOpen.empty()){
                indexOfOpen.pop();
              }else if(!indexOfStar.empty()){
                indexOfStar.pop();
              }else{
                  return false;
              } 
            }
        }
        cout<<indexOfOpen.empty()<<endl;
        while(!indexOfOpen.empty()&&!indexOfStar.empty()){
            if(indexOfOpen.top()>indexOfStar.top())return false;
            indexOfOpen.pop();
            indexOfStar.pop();
        }
        return indexOfOpen.empty();
    }
};


// you need to use the index to keep an eye for the * is it before the ( or after it 
class Solution {
public:
    bool checkValidString(string s) {
        int countOfOpen=0;

        int countOfClose=0;
        
        int n = s.size();
        for( int i =0;i<n;i++){
            char c = s[i];
            if(c=='('||c=='*'){
                countOfOpen++;
            }else countOfOpen--;
            if(s[n-1-i]==')'||s[n-1-i]=='*'){
                countOfClose++;
            }else countOfClose--;
            if(countOfClose<0||countOfOpen<0)return false;
            
        }
        return true;
    }
};