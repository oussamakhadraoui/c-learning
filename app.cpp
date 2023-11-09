#include <iostream>
#include <vector>
using namespace std;

int main()
{
vector<int> v;
v.push_back(1);
v.push_back(10);
v.push_back(100);
v.push_back(1000);
v.erase(v.begin());
v.insert(v.begin()+6,10);
for (vector<int>::iterator it=v.begin();it!=v.end();it++){
    cout<<*it<<endl;
    }
} 


// search iostream