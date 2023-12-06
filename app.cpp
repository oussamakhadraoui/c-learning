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
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

//     bool repeatedSubstringPattern(string s) {

//         int size  = s.size();
//         if(size==1){
//             return false;
//         }
//     string patern;
//     for (int i =1;i<size;i++){
//         if(s[i]==s[0]){
//           patern=s.substr(0,i);
//           break;
//         }
//     }

// for(int i = patern.size();i<size;i+=patern.size()){
//     if(s.substr(i,patern.size())!=patern){
//         return false;
//     }
// }
// return true;
//     }

//    int strStr(string haystack, string needle) {
//         if(needle.find(haystack)>=0){
//           for(int x =0;x<haystack.size();x++){
//             if(haystack[x]==needle[0]){
//                 return x;
//             }
//           }
//         }else{
//           return -1;

//         }

//     }
// int countCharacters(vector<string>& words, string chars) {
//   vector<int> x(26,0);
//   int answer;
//   for (char i : chars){
//     x[i-'a']++;
//   }

//   for(string& word : words){
//     if(isTrue(word,x)){
//       answer+=word.length();
//     }
  
//   }
//   return answer;

// }
// bool isTrue(const std::string& word, std::vector<int>& counts){
//   vector <int>c(26,0);
//   for(char i :word){
//     c[i-'a']++;
//     if(c[i-'a']>counts[i-'a']){
//       return false;
//     }
//   }
//   return true;
// }
//  int minTimeToVisitAllPoints(vector<vector<int>>& points) {
//   int result;
//   if(points.size()==1){
//     return 1;
//   }
// for (int i =0;i<points.size()-1;i++){

// result+= returnMaxVal(points[i],points[i+1]);
 
// }
//   return result;
//   }

//   int returnMaxVal(vector<int> & x,vector<int> & y){
//   int maxVal;
//   int xi =abs( x[0]-y[0]);
//   int yi = abs(x[1]-y[1]);

//   maxVal = max(xi,yi);
//     return  maxVal;
//   }

//  string largestGoodInteger(string num) {
//  string result ;
// vector<int> total;
// int max=0;
//  result= num[0];
//  for (int i =0;i<num.length();i++){
//   if(result.length()==3){
//     total.push_back(stoi(result));
//     result= num[i];
//   }
//   if(num[i]==num[i+1]){
//     result+=num[i+1];
//   }else{
//     result=num[i+1];
//   }
// }
// if(total.size()==0){

//     return "";
// }else{
//   for(int i=0 ;i<total.size();i++){
//     if(total[i]>=max){
//       max=total[i];
//     }
//   }
// }
// return to_string(max); 
// }
    string largestGoodInteger(string num) {
      int result = -1;
      for (int i=0;i<num.length()-1;i++){
        if(num[i]==num[i+1]&&num[i]==num[i+2]){
          result= max(result ,num[i]-'0');
        }
      }
      return (result=-1)?"":string(3,result-'0');
    }

    int totalMoney(int n) {
        int result;
   for(int i=0;i<n;i++){
    result +=(n%7) + (n/7+1);
   }
      return result;
      }   
       vector<int> twoSum(vector<int>& nums, int target) {
       vector<int>  result ;
        int toFind;
        int size =nums.size();
        for(int i=0;i<size;i++){
            toFind=target-nums[i];
            for(int x=i+1;x<size;x++){
                if(nums[x]==toFind){
                    result.push_back(i);
                    result.push_back(x);
                    break;
                }
            }
        }
        return result;
    }
  //    vector<int> twoSum(vector<int>& nums, int target) {
  //  unordered_map<int,int > result ;
  //  int n = nums.size();
  //  for (int i=0;i<n;i++){
  //   int rest = target-nums[i];
  //   if(result.count(rest)){
  //     return {result[rest],i};
  //   }
  //      result[nums[i]]=i;
  //  }
  //  return {};
  //   }
               int majorityElement(vector<int>& nums) {
       unordered_map<int ,int> result ;
       int size = nums.size();
       for (int i=0;i<size;i++){
        result[nums[i]]++;
       }
       int Max;
       int final;
       int size2= result.size();
       for(auto i: result){
          if(i.second>=Max){
            Max=i.second;
            final=i.first;
          }
       }
       return final;
    }

    // for (auto  i :um){
//     if(i.second==1){
//         return i.first;

   int mostFrequentEven(vector<int>& nums) {
    unordered_map <int ,int> result ;
    sort(nums.begin(), nums.end());
    int size;
    size=nums.size();
    for(int i =0;i<size;i++){
      result[nums[i]]++;
    } 
    int Max;
    int final;
  for (auto het:result){
    if(het.second>Max){
       Max=het.second;
       final=het.first;
    }
  }
  return final;
  }
int main(void){
  // cout<<largestGoodInteger("abbbx");
  vector <int> oussama;
  oussama = {2,3,4};
  cout<<majorityElement(oussama);
 
  return 0;
}