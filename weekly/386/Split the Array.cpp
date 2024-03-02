 #include <bits/stdc++.h>
  using namespace std;
    bool isPossibleToSplit(vector<int>& nums) {
        // Array to store the frequency of each element in the range [1, 100]
        int elementFrequency[101] = {0};
        
        // Populating the frequency array
        for (int num : nums) {
            elementFrequency[num]++;
            
            // If any element frequency exceeds 2, it's not possible to split
            if (elementFrequency[num] > 2) {
                return false;
            }
        }
        return true;
};