 #include <bits/stdc++.h>
 using namespace std;
 class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int zero=0;
        int ones=0;
        for(int& num:students){
            num==1?ones++:zero++;
        }
        for(int &num:sandwiches){
            num==1?ones--:zero--;
            if(zero<0||ones<0)return ones+zero+1;
        }
        return 0;
    }
};