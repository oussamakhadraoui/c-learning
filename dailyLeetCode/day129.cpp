 #include <bits/stdc++.h>
 using namespace std;
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int sub = tickets[k] ;
        int result=sub;
        int toadd=0;
        for(int i=0;i<tickets.size();i++){
            if(i==k)continue;
            int num =tickets[i];
            if(i<k)num>=sub?toadd=sub:toadd=num;
            else num>=sub?toadd=sub-1:toadd=num;
            result+=toadd;
        }
        return result;
    }
};