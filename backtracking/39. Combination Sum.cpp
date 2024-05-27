class Solution {
public:
    int n;
    void backtrack(int start,vector<int>&add,vector<vector<int>>&result,vector<int>& candidates,int rest){
        if(rest<0)return;
        else if(rest==0)result.push_back(add);
        else{
            for(int i =start;i<n;i++){
                add.push_back(candidates[i]);
                backtrack(i,add,result,candidates,rest-candidates[i]);
                add.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        this->n=candidates.size();
        vector<int>add;
        vector<vector<int>>result;
        backtrack(0,add,result,candidates,target);
        return result;
    }
};