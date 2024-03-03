 #include <bits/stdc++.h>
 using namespace std;
   
    vector<int> resultArray(vector<int>& nums) {
        vector<int>arr1({nums[0]});
        vector<int>arr2({nums[1]});
        int x=0,y=0;
        for(int i =2;i<nums.size();i++){
            if(arr1[x]>arr2[y]){
                x++;
                arr1.push_back(nums[i]);
            }else{
                arr2.push_back(nums[i]);
                y++;
            }
        }
        arr1.insert(arr1.end(), arr2.begin(), arr2.end());
        return arr1;
    }