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
#include <bits/stdc++.h>
using namespace std;
int main (){
	freopen("a.txt","r",stdin);
	int n;
    cin>>n;
    vector<int>num(n);
    for(int i =0;i<n;i++){
        cin>>num[i];
    }
    unordered_map<int,int>rec;
    for(int i =0;i<n;i++){
        for(int j=i+1;j<n;j++){
            rec[num[i]+num[j]]++;
        }
    }
    int result=0;
    for(auto&[key,val]:rec){
        result=max(result,val);
    }
    cout<<result<<endl;
 
	return 0;
}