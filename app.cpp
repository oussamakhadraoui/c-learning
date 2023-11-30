// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int a;
//     int b;
//     int DaysNumber;
//     int final =0;
// cin>>a>>b >>DaysNumber;
// for(int i=0;i<DaysNumber;i++)
// {
// int x; 
// cin>>x;
// if(x>=a&&x<=b){
//     final++;
// }
// }

// cout<<final;
//     return 0;
// } 

// #include <iostream>
// #include <vector>
// using namespace std;



// bool compare(int D ,int F,int d,int f){
// bool comp=false;
// if((d>=D&&d<=F)||(f>=D&&f<=F)||(f>=F&&d<=D)){
//     comp=true;
// }


//     return comp;
// }
// int main() {
// int start,end,totalInvi;
// int final=0;
// cin>>start>>end>>totalInvi;
// for(int i =0;i<totalInvi;i++){
//     int d,f;
//     cin>>d>>f;
//    if(compare(start,end,d,f)){
//     final++;
//    }
// }
// cout<<final;
// return 0;
// }

// #include <iostream>
// using namespace std;

// int main (){
//     int frog , tour;
    
// cin>>frog>>tour;
// int array[frog]={0};
// for(int i = 0 ;i<tour;i++){
//    int fro,distance;
//    cin>>fro>>distance;
//    array[fro]={array[fro]+distance};

// }
// for(int i = 0;i<=sizeof(array);i++){

//  cout<<array[i];
// }
//     return 0;
// }


// #include <iostream>
// using namespace std;



//     string mergeAlternately(string word1, string word2) {
//     string final;
//     int totalLength=max(word1.size(),word2.size());
//     for(int i =0;i<totalLength;i++){
//         if (i < word1.length()) {
//                 final += word1[i];
//             }
//             if (i < word2.length()) {
//                 final += word2[i];
//             }
//     }
//     return final;

//     }
// int main(){
// string x,y;
// cin>>x>>y;
// cout<<mergeAlternately(x,y);
//     return 0;
// }
// #include <iostream>
// #include <vector> 
// #include <bits/stdc++.h>
// using namespace std;

//   int singleNumber(vector<int>& nums) {
// unordered_map<int,int> um;
// int x = nums.size();
// for( int i =0;i<x;i++ ){
//    um[nums[i]]++;
// }
// for (auto  i :um){
//     if(i.second==1){
//         return i.first;
//     }else{
//         return 1;
//     }
// }
//     }
// int main(void){
// vector<int> ouusama;
// ouusama= {1,2,4};
// //2 2 3 4 4
// cout<<singleNumber(ouusama);
// return 0;
// }

// #include <iostream>
// #include <vector> 
// #include <bits/stdc++.h>
// using namespace std;

//    int missingNumber(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         if(nums[0]!=0){
//             return 0;
//         }

//         int x = nums.size();
//         int ans ;
//         for(int i =0 ;i<x-1;i++){
//           if(nums[i]!=nums[i+1]-1){
//             ans=nums[i]+1;
//             break;
//           }else{
//             ans=nums[x-1]+1;
//           }
//         }
//         return ans;
//     }
// int main (void ){
    
//     vector<int> ouusama;
// ouusama= {1,2,4};
// cout<<missingNumber(ouusama);
//     return 0;
// }



// solution 

        // int n = s.size();
        // for (int i = 1; i <= n / 2; i++) {
        //     if (n % i == 0) {
        //         string pattern = s.substr(0, i);
        //         int j = i;
        //         while (j < n) {
        //             if (s.substr(j, i) != pattern) {
        //                 break;
        //             }
        //             j += i;
        //         }
        //         if (j == n) {
        //             return true;
        //         }
        //     }
        // }
        // return false;


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

    bool repeatedSubstringPattern(string s) {

        int size  = s.size();
        if(size==1){
            return false;
        }
    string patern;
    for (int i =1;i<size;i++){
        if(s[i]==s[0]){
          patern=s.substr(0,i);
          break;
        }
    }

for(int i = patern.size();i<size;i+=patern.size()){
    if(s.substr(i,patern.size())!=patern){
        return false;
    }
}
return true;
    }



int main(void){
string s = "abcabcabcabc";

cout<<repeatedSubstringPattern(s);
  return 0;
}