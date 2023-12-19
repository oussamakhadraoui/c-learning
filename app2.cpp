#include <bits/stdc++.h>
using namespace std;
  using item=pair<int, string>;
    unordered_map<string, set<item>> Rated;
    unordered_map<string, item> mp;
int FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings)
    {
     int size= foods.size();
        for(int i =0;i<size;i++){
             string food=foods[i], cuisine=cuisines[i];
            int rating=ratings[i];
            mp[food]={-rating, cuisine};//take minus
            Rated[cuisine].insert({-rating, food});
          
             }
        return 1;
    }
    
    void changeRating(string food, int newRating) {
       string cuisine = mp[food].second;
       int oldRating = mp[food].first;
       Rated[cuisine].erase({oldRating,food});
       Rated[cuisine].insert({-newRating,food});
       mp[food]={-newRating,cuisine};
    }
    
    string highestRated(string cuisine) {
        return Rated[cuisine].begin()->second;
    }

       vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
       
        int size = img.size();
        int size2= img[0].size();
        vector<vector<int>> result(size,vector<int>(size2,0)) ;
   
    for(int i= 0;i<size;i++){
        for(int j= 0;i<size2;j++){
            int count=0;
            int acc=0;
            int minUp=i-1;
            int minLeft=j-1;
            for(int k=minUp;k<=minUp+2;k++){
            for(int l=minLeft;l<=minLeft+2;l++){
                if(k>0 &&l>0 &&k<size &&l<size2){
                    count++;
                    acc+=img[k][l];
                }
            }
            }
         
        result[i][j]=acc/count;
        }
    }
        
        
        
        
        return result;
    }
 int main (){
  cout<<"hello";
  return 0;
 }