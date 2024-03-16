 #include <bits/stdc++.h>
 using namespace std;
 class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        auto find = upper_bound(letters.begin(),letters.end(),target);
        return find!=letters.end()? *find:letters[0];
    }
};