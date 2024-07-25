#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        for(int i =0;i<n;i++){
            if(arr[i]%2)continue;
            int low=0;
            int high=n-1;
            int target= arr[i]/2;
            while(low<=high){
                int mid= low+(high-low)/2;
                if(arr[mid]==target&& mid!=i)return true;
                if(arr[mid]>target)high=mid-1;
                else low=mid+1;
            }
            
        }
        return false;
    }
};