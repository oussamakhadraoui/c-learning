 #include <bits/stdc++.h>
 using namespace std;
class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        int n = deck.size();
        queue<int>q;
        for(int i =0;i<n;i++){
            q.push(i);
        }
        vector<int>result(n,0);
        for(int i =0;i<n;i++){
            result[q.front()]=deck[i];
            q.pop();
            int memo= q.front();
            q.pop();
            q.push(memo);
        }
        return result;
    }
};



// [0,1,2,3] ok this is a queue first iteration pop 0 we put 1 to the end 2,3,1 and we keep doing that 
// so the shuffle of the cards go exactly in its position 