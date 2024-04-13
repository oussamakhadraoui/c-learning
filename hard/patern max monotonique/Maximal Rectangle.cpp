 #include <bits/stdc++.h>
 using namespace std;
 class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
       stack<int>st;
        int n = heights.size();
        vector<int>left(n,-1);
        vector<int>right(n,-1);
        int result=0;
        st.push(-1);
        for(int i =0;i<n;i++){
            int id=st.top();
            while(id!=-1&&heights[i]<=heights[id]){
                st.pop();
                id=st.top();
            }
            st.push(i);
            left[i]=id;
        }
        st=stack<int>();
        st.push(n);
        for(int i =n-1;i>=0;i--){
            int id=st.top();
            while(id!=n&&heights[i]<=heights[id]){
                st.pop();
                id=st.top();
            }
            st.push(i);
            right[i]=id;
            result=max((right[i]-left[i]-1)*heights[i],result);
        }

        return result;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int result=0;
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int>row(n,0);
        cout<<m<<endl;
        for(int i =0;i<n;i++)row[i]=(matrix[0][i]-'0');
         
        for(int i =0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0)continue;
                if(matrix[i][j]=='0') row[j]=0;
                row[j]+=(matrix[i][j]-'0');
            }       
            result=max(result,largestRectangleArea(row));
        }
        return result;
    }
};