#include <bits/stdc++.h>

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
using namespace std;

int main (){
	freopen("a.txt","r",stdin);
	int t,n;
	int wrong=0;
	int first;
	vector<pair<int,int>>inc;
	vector<int>num;
	cin>>t;
	while(t--){
		
		
		cin>>n;
		if(n==3)cout<<"YES"<<endl;
		else{
			
			cin>>first;
			
			num.push_back(first);
				for(int i =1;i<n;i++){
					int numero;
					cin>>numero;
					num.push_back(numero);
     inc.push_back({get_pgcd(num[i],num[i-1]),i});
				}
		}
		for(int i=1;i<inc.size();i++){
			if(inc[i].first>inc[i-1].first){
				
			}
		}

	}
 
	return 0;
}