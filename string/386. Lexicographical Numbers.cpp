#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
//lexicographical order - ones digit first then second digit 1111222233333
    void f(int startnum, int n, vector<int>& ans) {
        if (startnum > n) {
            return;
        }
        ans.push_back(startnum);
        for (int append = 0; append <= 9; append++) {
            int newnum =startnum * 10 + append;
            if (newnum > n)
                {
                    return;
                }
            f(newnum, n, ans);
        }
    }
    vector<int> lexicalOrder(int n) {
        vector<int> ans;
        for (int curr = 1; curr <= 9; curr++) {
            f(curr, n, ans);
        }
        return ans;
    }
};