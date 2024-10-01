


class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int>rec;
        for(int &num:arr){
            int rest = (num%k+k) % k;
            rec[rest]++;
        }
        for(auto&[key,val]:rec){
            int rest=k-key;
            if(key==0){
                if(val%2!=0)return false;
            }else if(rec[rest]!=val)return false;
            
        }
        return true;
    }
};