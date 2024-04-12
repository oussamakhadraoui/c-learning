 #include <bits/stdc++.h>
 using namespace std;
 class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>MaxLeft(n,0);
        vector<int>MaxRight(n,0);
        int left=0;
        int right=0;
        for(int i =0;i<n;i++){
            left=max(left,height[i]);
            right=max(right,height[n-i-1]);
            MaxLeft[i]=left;
            MaxRight[n-i-1]=right;
        }

        int result=0;
        for(int i =0;i<n;i++){
            cout<<min(MaxRight[i],MaxLeft[i])<<endl;
            result+=(min(MaxRight[i],MaxLeft[i])-height[i]);
        }
        return result;
        
    }
};