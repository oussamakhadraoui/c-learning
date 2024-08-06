#include <bits/stdc++.h>
using namespace std;
vector<int> precompute_min_operations(int max_value) {
    vector<int> min_ops(max_value + 1, 0);
    for (int i = 1; i <= max_value; ++i) {
        int steps = 0;
        int num = i;
        while (num > 0) {
            num = num / 3;
            steps++;
        }
        min_ops[i] = steps;
    }
    return min_ops;
}

int main (){
 freopen("a.txt","r",stdin);
 
int t;
cin>>t;
    const int MAX_VAL = 200000;
    vector<int> operations = precompute_min_operations(MAX_VAL);
while(t--){
  int l,r;
  cin>>l>>r;
  vector<int>rec;
  for(int i=l;i<=r;i++){
     rec.push_back(i);
  }
  int steps=0;
  for(int i =0;i<rec.size();i++){
    while(rec[i+1]){
      
    }
  }
}
 

 return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// vector<int>maxRc(int maxVal){
//   vector<int>result(maxVal+1,0);
//   for(int i=1;i<=maxVal;i++){
//     int count=0;
//     int num=i;
//     while(num>0){
//       num/=3;
//       count++;
//     }
//     result[i]=count;
//   }
//   return result;
// }
// int main (){
//  freopen("a.txt","r",stdin);
//   int t ;
//   cin>>t;
//   vector<int>to=maxRc(200001);
//   while(t--){
//     int l,r;
//     cin>>l>>r;

//     int result=0;
//     for(int i =l;i<=r;i++){
//       result= max(result,to[i]);
//     }
//     cout<<result<<endl;
//   }
//  return 0;
// }