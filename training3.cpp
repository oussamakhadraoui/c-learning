#include <bits/stdc++.h>
using namespace std;
int get_pgcd(int a, int b)
{
    int pgcd = 0;
 
    while(1)
    {
        pgcd = a % b;
        if(pgcd == 0)
        {
            pgcd = b;
            break;
        }
        a = b;
        b = pgcd;
    }
 
    return pgcd;
}
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int result=0;
        int n = heights.size();
        vector<int>compare(101,0);
        for(int i=0;i<n;i++)compare[heights[i]]++;
        int j =0;
        for(int i =0;i<n;i++){
            while(!compare[j])j++;
            cout<<compare[j]<<" "<<heights[i]<<endl;
            if(j!=heights[i]){
                result++;  
            }
            compare[j]--;
        }
        return result;
    }
};

int main (){
	freopen("a.txt","r",stdin);
	vector<int>x{1,1,4,2,1,3};
int k=5;
 Solution().heightChecker(x);
 
	return 0;
}