// // #include <iostream>
// // #include <vector>
// // using namespace std;

// // int main()
// // {
// //     int a;
// //     int b;
// //     int DaysNumber;
// //     int final =0;
// // cin>>a>>b >>DaysNumber;
// // for(int i=0;i<DaysNumber;i++)
// // {
// // int x; 
// // cin>>x;
// // if(x>=a&&x<=b){
// //     final++;
// // }
// // }

// // cout<<final;
// //     return 0;
// // } 

// // #include <iostream>
// // #include <vector>
// // using namespace std;



// // bool compare(int D ,int F,int d,int f){
// // bool comp=false;
// // if((d>=D&&d<=F)||(f>=D&&f<=F)||(f>=F&&d<=D)){
// //     comp=true;
// // }


// //     return comp;
// // }
// // int main() {
// // int start,end,totalInvi;
// // int final=0;
// // cin>>start>>end>>totalInvi;
// // for(int i =0;i<totalInvi;i++){
// //     int d,f;
// //     cin>>d>>f;
// //    if(compare(start,end,d,f)){
// //     final++;
// //    }
// // }
// // cout<<final;
// // return 0;
// // }

// // #include <iostream>
// // using namespace std;

// // int main (){
// //     int frog , tour;
    
// // cin>>frog>>tour;
// // int array[frog]={0};
// // for(int i = 0 ;i<tour;i++){
// //    int fro,distance;
// //    cin>>fro>>distance;
// //    array[fro]={array[fro]+distance};

// // }
// // for(int i = 0;i<=sizeof(array);i++){

// //  cout<<array[i];
// // }
// //     return 0;
// // }


// // #include <iostream>
// // using namespace std;



// //     string mergeAlternately(string word1, string word2) {
// //     string final;
// //     int totalLength=max(word1.size(),word2.size());
// //     for(int i =0;i<totalLength;i++){
// //         if (i < word1.length()) {
// //                 final += word1[i];
// //             }
// //             if (i < word2.length()) {
// //                 final += word2[i];
// //             }
// //     }
// //     return final;

// //     }
// // int main(){
// // string x,y;
// // cin>>x>>y;
// // cout<<mergeAlternately(x,y);
// //     return 0;
// // }
// // #include <iostream>
// // #include <vector> 
// // #include <bits/stdc++.h>
// // using namespace std;

// //   int singleNumber(vector<int>& nums) {
// // unordered_map<int,int> um;
// // int x = nums.size();
// // for( int i =0;i<x;i++ ){
// //    um[nums[i]]++;
// // }
// // for (auto  i :um){
// //     if(i.second==1){
// //         return i.first;
// //     }else{
// //         return 1;
// //     }
// // }
// //     }
// // int main(void){
// // vector<int> ouusama;
// // ouusama= {1,2,4};
// // //2 2 3 4 4
// // cout<<singleNumber(ouusama);
// // return 0;
// // }

// // #include <iostream>
// // #include <vector> 
// // #include <bits/stdc++.h>
// // using namespace std;

// //    int missingNumber(vector<int>& nums) {
// //         sort(nums.begin(),nums.end());
// //         if(nums[0]!=0){
// //             return 0;
// //         }

// //         int x = nums.size();
// //         int ans ;
// //         for(int i =0 ;i<x-1;i++){
// //           if(nums[i]!=nums[i+1]-1){
// //             ans=nums[i]+1;
// //             break;
// //           }else{
// //             ans=nums[x-1]+1;
// //           }
// //         }
// //         return ans;
// //     }
// // int main (void ){
    
// //     vector<int> ouusama;
// // ouusama= {1,2,4};
// // cout<<missingNumber(ouusama);
// //     return 0;
// // }



// // solution 

//         // int n = s.size();
//         // for (int i = 1; i <= n / 2; i++) {
//         //     if (n % i == 0) {
//         //         string pattern = s.substr(0, i);
//         //         int j = i;
//         //         while (j < n) {
//         //             if (s.substr(j, i) != pattern) {
//         //                 break;
//         //             }
//         //             j += i;
//         //         }
//         //         if (j == n) {
//         //             return true;
//         //         }
//         //     }
//         // }
//         // return false;


// #include <iostream>
// #include <stdio.h>
// #include <bits/stdc++.h>
// #include <string>
// #include <vector>
// using namespace std;
// // int main (void){
// // double oldTax,NewTax,prixAvecTax;
// // cin>>oldTax>>NewTax>>prixAvecTax;
// // double Prix= ((prixAvecTax*100)/(oldTax+100))*100;
// // double result =round(Prix+(Prix*NewTax)/100) ;
// // cout<<result/100;



// //   return 0;
// // }
 
// //   int main (void){ 
  
// //   int x;

// //   cin>>x;
// //   cin.ignore();
// //   for(int i=1;i<x+1;i++){
// //   string s;
// //   getline(cin,s);
// //   if(i%2==1){
// // cout<<s<<endl; ;
// // }
  
  
// //   }
// //   return 0; }
//   // int main (void){ 
//   // int x;
//   // vector<string> result;
//   // cin>>x;
//   // cin.ignore();
//   // for(int i=0;i<x;i++){
//   //  string st;
//   //  getline(cin,st);
//   //  result.push_back(st);

//   // }
//   // int vectorLength;
//   // vectorLength=result.size();
//   // int Max=0;
//   // for(int i=0;i<vectorLength;i++){
//   //   if(result[i].length()>Max){
//   //     Max=result[i].length();
//   //     cout<<result[i]<<endl;
//   //   }
//   // }

//   // return 0; }
//         void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
  
//        int m1,n1,t;
//        m1=m-1;
//        n1=n-1;
//        t=m+n-1;
//        while(n1>=0){
//         if(m1>=0&&nums1[m1]>=nums2[n1]){
//             nums1[t--]=nums1[m1--];
//         }else{
//  nums1[t--]=nums2[n1--];
//         }
//        }
//     }

// //   int main (void){ 
// // int max = 100;
// // int matrix[max][max];
// // memset(matrix,0,sizeof(matrix));
// // int n,e;
// // cin>>n>>e;
// // for(int i=0;i<e;i++){
// //   int na,nb;
// //   cin>>na>>nb;
// //   matrix[na][nb]=1;
// // }
// // for(int i=0;i<n;i++){
// //      for(int j=0;j<n;j++){
// //      cout<<matrix[i][j]<<" ";
// // }
// // cout<<endl;
// // }

  
// //   return 0; 
  
// //   }
// //     bool repeatedSubstringPattern(string s) {

// //         int size  = s.size();
// //         if(size==1){
// //             return false;
// //         }
// //     string patern;
// //     for (int i =1;i<size;i++){
// //         if(s[i]==s[0]){
// //           patern=s.substr(0,i);
// //           break;
// //         }
// //     }

// // for(int i = patern.size();i<size;i+=patern.size()){
// //     if(s.substr(i,patern.size())!=patern){
// //         return false;
// //     }
// // }
// // return true;
// //     }

// //    int strStr(string haystack, string needle) {
// //         if(needle.find(haystack)>=0){
// //           for(int x =0;x<haystack.size();x++){
// //             if(haystack[x]==needle[0]){
// //                 return x;
// //             }
// //           }
// //         }else{
// //           return -1;

// //         }

// //     }
// // int countCharacters(vector<string>& words, string chars) {
// //   vector<int> x(26,0);
// //   int answer;
// //   for (char i : chars){
// //     x[i-'a']++;
// //   }

// //   for(string& word : words){
// //     if(isTrue(word,x)){
// //       answer+=word.length();
// //     }
  
// //   }
// //   return answer;

// // }
// // bool isTrue(const std::string& word, std::vector<int>& counts){
// //   vector <int>c(26,0);
// //   for(char i :word){
// //     c[i-'a']++;
// //     if(c[i-'a']>counts[i-'a']){
// //       return false;
// //     }
// //   }
// //   return true;
// // }
// //  int minTimeToVisitAllPoints(vector<vector<int>>& points) {
// //   int result;
// //   if(points.size()==1){
// //     return 1;
// //   }
// // for (int i =0;i<points.size()-1;i++){

// // result+= returnMaxVal(points[i],points[i+1]);
 
// // }
// //   return result;
// //   }

// //   int returnMaxVal(vector<int> & x,vector<int> & y){
// //   int maxVal;
// //   int xi =abs( x[0]-y[0]);
// //   int yi = abs(x[1]-y[1]);

// //   maxVal = max(xi,yi);
// //     return  maxVal;
// //   }

// //  string largestGoodInteger(string num) {
// //  string result ;
// // vector<int> total;
// // int max=0;
// //  result= num[0];
// //  for (int i =0;i<num.length();i++){
// //   if(result.length()==3){
// //     total.push_back(stoi(result));
// //     result= num[i];
// //   }
// //   if(num[i]==num[i+1]){
// //     result+=num[i+1];
// //   }else{
// //     result=num[i+1];
// //   }
// // }
// // if(total.size()==0){

// //     return "";
// // }else{
// //   for(int i=0 ;i<total.size();i++){
// //     if(total[i]>=max){
// //       max=total[i];
// //     }
// //   }
// // }
// // return to_string(max); 
// // }
//     string largestGoodInteger(string num) {
//       int result = -1;
//       for (int i=0;i<num.length()-1;i++){
//         if(num[i]==num[i+1]&&num[i]==num[i+2]){
//           result= max(result ,num[i]-'0');
//         }
//       }
//       return (result=-1)?"":string(3,result-'0');
//     }

//     int totalMoney(int n) {
//         int result;
//    for(int i=0;i<n;i++){
//     result +=(n%7) + (n/7+1);
//    }
//       return result;
//       }   
//        vector<int> twoSum(vector<int>& nums, int target) {
//        vector<int>  result ;
//         int toFind;
//         int size =nums.size();
//         for(int i=0;i<size;i++){
//             toFind=target-nums[i];
//             for(int x=i+1;x<size;x++){
//                 if(nums[x]==toFind){
//                     result.push_back(i);
//                     result.push_back(x);
//                     break;
//                 }
//             }
//         }
//         return result;
//     }
//   //    vector<int> twoSum(vector<int>& nums, int target) {
//   //  unordered_map<int,int > result ;
//   //  int n = nums.size();
//   //  for (int i=0;i<n;i++){
//   //   int rest = target-nums[i];
//   //   if(result.count(rest)){
//   //     return {result[rest],i};
//   //   }
//   //      result[nums[i]]=i;
//   //  }
//   //  return {};
//   //   }
//                int majorityElement(vector<int>& nums) {
//        unordered_map<int ,int> result ;
//        int size = nums.size();
//        for (int i=0;i<size;i++){
//         result[nums[i]]++;
//        }
//        int Max;
//        int final;
//        int size2= result.size();
//        for(auto i: result){
//           if(i.second>=Max){
//             Max=i.second;
//             final=i.first;
//           }
//        }
//        return final;
//     }

//     // for (auto  i :um){
// //     if(i.second==1){
// //         return i.first;

//   //  int mostFrequentEven(vector<int>& nums) {
//   //   unordered_map <int ,int> result ;
//   //   sort(nums.begin(), nums.end());
//   //   int size;
//   //   size=nums.size();
//   //   for(int i =0;i<size;i++){
//   //     result[nums[i]]++;
//   //   } 
//   //   int Max=1;
//   //   int final;
//   // for (auto het:result){
//   //   if(het.second>Max){
//   //      Max=het.second;
//   //      final=het.first;
//   //   }
//   // }
//   // return final;
//   // }
//   string largestOddNumber(string num) {
//   int enter ,p,d,prix;
//   vector<int> result;
//   cin>>enter;
//   for(int i = 0;i<enter;i++){
// cin>>p>>d>>prix;
// if(d>0){
//   result.push_back(prix/p);
// }


//   }
// for(int i;i<result.size();i++){

//   cout<<result[i];
// }

//     }


    
// // int main(void){
// //  int enter ;
// //  float p,d,prix;
// //   vector<float> result;
// //   cin>>enter;
// //   for(int i = 0;i<enter;i++){
// // cin>>p>>d>>prix;
// // if(d>0){
// //   result.push_back(prix/p);
// // }


// //   }
// // for(int i=0;i<result.size();i++){
// //   cout<<result[i]<<endl;
// // }
// // return 0;
// // }
// // int main(void){
// //  int enter ;
// //  float note;
// //   vector<float> result;
// //   cin>>enter;
// //   for(int i = 0;i<enter;i++){
// // cin>>note;

// //   result.push_back(note);
// // }
// // note=0;
// // for(int i=0;i<result.size();i++){
// //   note+=result[i];
// // }
// // cout<<note/result.size();
// // return 0;
// // }


// // int main (void){
// // int read;
// // cin>>read;
// // cout<<ceil(read/60)*45;

// //   return 0;
// // }

// //  int main (void){ 
// // int max= 100;
// // int result[max][max];
// // memset(result,0,sizeof(result));
// // int node,edge;
// // cin>>node>>edge;
// // for(int i=0;i<edge;i++){
// //    int na,nb;
// //    cin>>na>>nb;
// //    result[na][nb]=1;

// // }
// //   for(int i =0;i<node;i++){
// //   for(int j=0;j<node;j++){
// //    cout<<result[i][j]; 
// //   }
// // cout<<endl;
// //   }
// //   return 0; 
  
// //   }
// //  int main (void){ 
// //   int Max=10;
// //   vector<int> graph[Max];
  
// //   int node,edge;
// //   cin>>node>>edge;
// //   for(int i=0;i<edge;i++){
// //     int na,nb;
// //     cin>>na>>nb;
// //     graph[na].push_back(nb);
// //   }

// //   for(int i =0;i<node;i++){
// //     cout<<i<<": ";
// //     for(int j =0;j<graph[i].size();j++){
// //      cout<<graph[i][j]<<" ";
// //     }
// //     cout<<endl;
// //   }
// //   return 0; 
// //   }
// //  int main (void){
// //   int x[]={1,5,2,9,4,2};
  
// //   int n = sizeof(x)/sizeof(x[1]);
// //   sort(x,x+n);
// //   for(int i=0;i<n;i++){
// //     cout<<x[i]<<" | ";
// //   }
// //   cout<<endl;
// //   vector<int >result(x,x+n);
// //   sort(result.begin(),result.end(),greater());
// //     for(int i=0;i<n;i++){
// //     cout<<result[i]<<" | ";
// //   }
// //   cout<<endl;
// //   cout<<n<<"  "<<result.size();
// //   return 0; 
// //   }
// struct voiture{
//   int puissance;
//   int porte;
//   voiture(int pui,int por){
//     puissance=pui,
//     porte=por;
//   }
// };
// bool comparevat(voiture v1,voiture v2)
// {
// return v1.puissance<v2.puissance;
// }
// //  int main (void){
// //   vector <voiture> v;
// //   int n;
// //   cout<<"enter the cat number ";
// //   cin>>n;

// //  while(n--){
// //   int p,n;
// //   cin>>p>>n;
// //   v.push_back(voiture(p,n));
// //  };

 
// //  for(int i =0;i<v.size();i++){
// //   cout<<v[i].porte<<" | "<<v[i].puissance<<endl;
// //  }
// // sort(v.begin(),v.end(),comparevat);

// // cout<<endl;
// //  for(int i =0;i<v.size();i++){
// //   cout<<v[i].porte<<" | "<<v[i].puissance<<endl;
// //  }
// //   return 0; 
// //   }
// //  int main (void){
// //   set<int> result;
// //   result.insert(5);
// //   result.insert(4);
// //   result.insert(2);
// //   result.insert(0);
// //   result.insert(-6);
// //   if(result.find(99)!=result.end()){
// //     cout<<"founded";
// //   }else{
// //     cout<<"not founded";
// //   }
// //   cout<<'\n';
// //   for(set<int>::iterator x=result.begin();x!=result.end();x++){
// //     cout<<*x;

// //   }
// //   return 0; 
// //   }

// bool comapree(map<string, int> & map1,map<string, int> & map2){
   
  
// }
// //  int main (void){
// // map<string, int> result;
// // vector<pair<string,int> >stock;
// //   int n;
// //   cin>>n;
// //   for(int i =0;i<n;i++){
// //     int score;
// //     string name;
// //     cin>>name>>score;
// //     if(result.find(name)!=result.end()){
// //       result[name]+=score;
// //     }else{
// //       result[name]=score;
// //     }
// //     stock.push_back(make_pair(name,result[name]) );
// //   }
// //   int Max=INT_MIN;
// //   string val="";
// //   for(map<string, int>::iterator it=result.begin();it!=result.end();it++){
// //     if(it->second>Max){
// //       Max=it->second;
// //       val=it->first;
// //     }
// //   }
// //   for (int i =0;i<n;i++){
// //     if(result[stock[i].first]==Max&&stock[i].second>=Max){
// //       cout<<stock[i].first;
// //       return 0;
// //     }
// //   }
// //  cout<<val;

// //   return 0; 
// //   }
//       vector<vector<int>> result;
//    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//      int size= candidates.size();
//      vector<int> stack;
//      //if target < candidate array items 

//      for(int i=0;i<size;i++){
//         if(candidates[i]<target){
//             stack.push_back(candidates[i]);
//         }else{

//         }
//      }


     
//  return result;

//     }
//         vector<vector<int>> transpose(vector<vector<int>>& matrix) {
//        int m= matrix.size();
//        int n = matrix[0].size();
//        vector<vector<int>>  result;
//        vector<int> pusher;  
//         for(int j =0;j<n;j++){
//        for(int i =0;i<m;i++){
//           pusher.push_back(matrix[j][i]);
//         }
//         result.push_back(pusher);
//         pusher.clear();

//        }
//        return result;
//     }
// int recur(int n){

// }
//       int addDigits(int num) {

// if(num<10){
//   return num;
// }
//         vector<int>result;
//         while(num){
//           result.push_back(num%10);
//           num/=10;
//         }
//           int x=0;
//         for(int i =0;i<result.size();i++){
//         x+= result[i];
//         }
//         return addDigits(x);
//         }
// int findSpecialInteger(vector<int>& arr) {
// int size = arr.size();
// int result;
// int answer;
// unordered_map<int,int> acc;
// for(int i=0;i<size;i++){
//   acc[arr[i]]++;
// }
// for(unordered_map<int,int>::iterator it=acc.begin();it!=acc.end();it++)
// {
//   if(it->second>result){
//     result= it->second;
//     answer=it->first;
//   }
// }
// return answer;


//     }


//   //    int reverse(int x) {
//   //       if(x>pow(2,31)-1||x<=(-pow(2,31)-1)){
//   //           return 0;
//   //       }
//   //   vector<int> result;
//   //  long final=0;
   
//   //       bool isNegative =false;
//   //       if(x<0){
//   //         isNegative=true;
//   //         x=abs(x);
//   //       }
//   //      while(x){
//   //       result.push_back(x%10);
//   //       x/=10;  
//   //      }
//   //      int size = result.size()-1;
//   //     for(int i=0;i<result.size();i++){
//   //       final=final+result[i]*pow(10,size);
//   //       size--;
//   //     }
      
//   //       return isNegative? -final:final;  
    

//   //   }
//         int reverse(int x){
//         int result=0;
//         while(x){
//             result=result*10+x%10;
//             x=x/10;
            
//         }
//         return result;
        
//     }
//         double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
//        vector<double> val;
//         double result=0;
//       for(int i =0;i<classes.size();i++){
//         for(int j=0;j<classes.size();j++){
//             if(i==j){
//               result+=(classes[j][0]+extraStudents)/(double(classes[j][1])+extraStudents);
//             }else{
//               result+=classes[j][0]/double(classes[j][1]);
//             }
//         }
//         val.push_back(result);
//         result=0;
//       }
//       for(int i=0;i<val.size();i++){
//         if(result<val[i]){
//           result=val[i];
//         }
//       }
//        return double(result)/classes.size();
//     }

//       int numSpecial(vector<vector<int>>& mat) {
//        unordered_map<int,int> rows;
//        unordered_map<int,int> col;
//        int size = mat.size();
//         int result=0;
//        for(int i=0;i<size;i++){
//         for(int j=0;j<size;j++){
//           if(mat[i][j]==1){
//             rows[i]++;
//             col[j]++;
//             }
//           }
//         }
//        for(int i=0;i<size;i++){
//         for(int j=0;j<size;j++){
//           if(mat[i][j]==1&&rows[i]==1&&col[j]==1){
//              result++;
//             }
//           }
//         }
//        return result;
//     }
//     vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
//         int m = grid.size();
//         int n = grid[0].size();

//         vector<int> rowOnes(m, 0);
//         vector<int> colOnes(n, 0);

//         // Count ones in each row and column
//         for (int i = 0; i < m; ++i) {
//             for (int j = 0; j < n; ++j) {
//                 rowOnes[i] += grid[i][j];
//                 colOnes[j] += grid[i][j];
//             }
//         }

//         // Calculate the difference matrix  
//         for (int i = 0; i < m; ++i) {
//             for (int j = 0; j < n; ++j) {
//                 grid[i][j] = 2 * (rowOnes[i] + colOnes[j]) - m - n;
//             }
//         }

//         return grid;
//     }
#include <iostream>
#include <vector> 
#include <bits/stdc++.h>
using namespace std;
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos,neg,result;
        for(int num:nums){
if(num<0){neg.push_back(num);}else{
pos.push_back(num);
}
}
        
        for(int i=0;i<pos.size();i++){

result.push_back(pos[i]);
            result.push_back(neg[i]);
            
}
            return result;
    }
 string firstPalindrome(vector<string>& words) {
      for (auto word : words)  // iterate all the string 
      if (isPalindrome(word)) // check palindrome if true 
        return word;      // return the palindrome
    return "";
  }


  bool isPalindrome(string& s) {  // palindrome function to check
    int i = 0;
    int j = s.length() - 1;
    while (i < j)
      if (s[i++] != s[j--]){
        return false;
      }
    return true;
  }

      int majorityElement(vector<int>& nums) {
      int count=0, maj=-1;  
      for(int num:nums){
          if(count==0)maj=num;
          
          count+=(num==maj)?1:-1;
      }
        return maj;
    }
          int cherryPickup(vector<vector<int>>& grid) {
        int rows = grid.size(), cols = grid[0].size();

        // 'dpCurrent' holds the max cherries picked up to the i-th row for all column pairs (j1, j2).
        vector<vector<int>> dpCurrent(cols, vector<int>(cols, -1));

        // 'dpNext' to hold the temporary results for the next row computations.
        vector<vector<int>> dpNext(cols, vector<int>(cols, -1));

        // Initialize the first row situation where both persons start at the corners.
        dpCurrent[0][cols - 1] = grid[0][0] + grid[0][cols - 1];

        // Iterate over all rows of the grid starting from the second row (i=1).
        for (int i = 1; i < rows; ++i) {
            // Try all possible column positions for the first person (j1).
            for (int j1 = 0; j1 < cols; ++j1) {
                // Try all possible column positions for the second person (j2).
                for (int j2 = 0; j2 < cols; ++j2) {
                    // Cherries picked up by the both persons - If on the same cell, don't double count.
                    int cherries = grid[i][j1] + (j1 == j2 ? 0 : grid[i][j2]);

                    // Consider all possible moves from previous row to current row for both persons
                    for (int prevJ1 = j1 - 1; prevJ1 <= j1 + 1; ++prevJ1) {
                        for (int prevJ2 = j2 - 1; prevJ2 <= j2 + 1; ++prevJ2) {
                            // If both previous positions are within bounds and a valid number of cherries was picked
                            if (prevJ1 >= 0 && prevJ1 < cols && prevJ2 >= 0 && prevJ2 < cols && dpCurrent[prevJ1][prevJ2] != -1) {
                                // Take the max between the current number of cherries and the newly computed value
                                dpNext[j1][j2] = max(dpNext[j1][j2], dpCurrent[prevJ1][prevJ2] + cherries);
                            }
                        }
                    }
                }
            }
            // Update 'dpCurrent' with 'dpNext' and reset 'dpNext' for the next iteration.
            swap(dpCurrent, dpNext);
            fill(dpNext.begin(), dpNext.end(), vector<int>(cols, -1));
        }

        // Find the maximum number of cherries that can be picked by traversing the last row's 'dpCurrent'.
        int maxCherries = 0;
        for (int j1 = 0; j1 < cols; ++j1) {
            for (int j2 = 0; j2 < cols; ++j2) {
                maxCherries = max(maxCherries, dpCurrent[j1][j2]);
            }
        }
        return maxCherries;
    }