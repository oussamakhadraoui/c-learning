class Solution {
public:
    int countPairs(vector<int>& nums) {
        int result=0;
        for(int i =0;i<nums.size();i++){
            string comp=to_string(nums[i]);
            for(int j=i+1;j<nums.size();j++){
                string comp2=to_string(nums[j]);
                for(int k=0;k<comp2.size();k++){
                    for(int kk=k+1;kk<comp2.size();kk++){
                        swap(comp2[k],comp2[kk]);
                        if(comp2==comp){
                            result++;
                            k=comp2.size();
                            kk=comp2.size();
                        }
                        swap(comp2[k],comp2[kk]);
                    }
                }
            }
        }
        return result;
    }
};