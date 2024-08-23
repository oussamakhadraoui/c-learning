#include <bits/stdc++.h>
#include <vector>

using namespace std;
class Solution {
public:
    string fractionAddition(string s) {
        int up =0;
        int down=1;
        int n =s.size();
        int i =0;
        int signe=1;
        while(i<n){
            if(s[i]=='-'){
                signe=-1;
                i++;
            }else signe=1;
            
            int top=0;
            while(i<n&&isdigit(s[i])){
                top=top*10+(s[i]-'0');
                i++;
            }
            top*=signe;
            i++;
            int bot=0;
            while(i<n&&isdigit(s[i])){
                bot=bot*10+(s[i]-'0');
                i++;
            }
            up=up*bot+top*down;
            down=down*bot;
        }
        int pgcd=gcd(up,down);
        return to_string(up/pgcd)+"/"+to_string(down/pgcd);
    }
};
int main() {
    string n ="1/3-1/2";
    Solution().fractionAddition(n);
    return 0;
}