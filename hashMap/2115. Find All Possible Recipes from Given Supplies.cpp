#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        unordered_set<string> available(supplies.begin(), supplies.end());
        vector<string> result;
        bool progress = true;

        while (progress) {
            progress = false;
            for (int i = 0; i < recipes.size(); i++) {

                if (available.count(recipes[i])) continue;
                
                bool canMake = true;
                for (auto &ing : ingredients[i]) {
                    if (!available.count(ing)) {
                        canMake = false;
                        break;
                    }
                }
                if (canMake) {
                    result.push_back(recipes[i]);
                    available.insert(recipes[i]);
                    progress = true;
                }
            }
        }
        
        return result;
    }
};
