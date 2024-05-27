class Solution {
public:
    int n;
    void backtrack(int start,vector<int>&add,vector<vector<int>>&result,vector<int>& candidates,int rest){
        if(rest<0)return;
        else if(rest==0)result.push_back(add);
        else{
            for(int i =start;i<n;i++){
                if(i>start&&candidates[i]==candidates[i-1])continue;
                add.push_back(candidates[i]);
                backtrack(i+1,add,result,candidates,rest-candidates[i]);
                add.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        this->n=candidates.size();
        vector<int>add;
        vector<vector<int>>result;
        sort(candidates.begin(),candidates.end());
        backtrack(0,add,result,candidates,target);
        return result;
    }
};