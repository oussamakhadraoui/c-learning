#include <bits/stdc++.h>
using namespace std;
 
// Function to return the count of
// required sub-strings
int countSubStr(string str, int n, char x)
{
    int res = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == x) {
 
            // Number of sub-strings from position
            // of current x to the end of str
            res += ((count + 1) * (n - i));
 
            // To store the number of characters
            // before x
            count = 0;
        }
        else
            count++;
    }
 
    return res;
}
 
// Driver code
int main()
{
    string str = "abcabc";
    int n = str.length();
    char x = 'c';
 
    cout << countSubStr(str, n, x);
 
    return 0;
}