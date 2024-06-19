#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int n;
    int flowerInBouquet;
    int adjacentFlowers;
    
    bool isEnoughNumberOfAdjacent(int mid,vector<int>& bloomDay){
        int next=0;
        int numberOfbouquet=0;
        for(int i =0;i<n;i++){
            if(bloomDay[i]<=mid)next++;
            else next=0;
            if(next==flowerInBouquet){
                numberOfbouquet++;
                next=0;
            }
        }
        return numberOfbouquet>=adjacentFlowers;
    }
    
    int minDays(vector<int>& bloomDay, int m, int k) {
        int result=-1;
        
        this->n=bloomDay.size();
        this->flowerInBouquet=k;
        this->adjacentFlowers=m;
        
        if((long)m*k>n)return -1;
        int left =0;
        int right =1e9;
        
        while(left<=right){
            int mid=(left+right)/2;
            if(isEnoughNumberOfAdjacent(mid,bloomDay)){
                result=mid;
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return result;
    }
};