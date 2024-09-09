#include <bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    vector<vector<int>> spiralMatrix(int n, int m, ListNode* head) {
        vector<vector<int>>result(n,vector<int>(m,-1));
        int i=0,j=0;
        int maxI=n-1,maxJ=m-1;
        int minI=0,minJ=0;
        
        while(true){
            for(int x=minJ;x<=maxJ&&head;x++){
                result[i][x]=head->val;
                head=head->next;
                j=x;
            }
            minI++;
            if(!head)break;
            for(int x=minI;x<=maxI&&head;x++){
                result[x][j]=head->val;
                head=head->next;
                i=x;
            }
            maxJ--;
            if(!head)break;
            for(int x=maxJ;x>=minJ&&head;x--){
                result[i][x]=head->val;
                head=head->next;
                j=x;
            }
            maxI--;
            if(!head)break;
            for(int x=maxI;x>=minI&&head;x--){
                result[x][j]=head->val;
                head=head->next;
                i=x;
            }
            minJ++;
            if(!head)break;
        }
        return result;
    }
};