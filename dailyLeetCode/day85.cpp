 #include <bits/stdc++.h>
 #include <vector>
 using namespace std;
class DSU {
private:
    vector<int> parent;
    vector<int> rank;
public:
    DSU(int size) : parent(size), rank(size, 0) {
        iota(parent.begin(), parent.end(), 0); 
    }

    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]); 
        }
        return parent[x];
    }

    void unite(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX != rootY) {
            if (rank[rootX] < rank[rootY]) {
                swap(rootX, rootY);
            }
            parent[rootY] = rootX; 
            if (rank[rootX] == rank[rootY]) rank[rootX]++;
        }
    }
};
class Solution {
public:
    bool canTraverseAllPairs(vector<int>& nums) {
        int n = nums.size();
        DSU dsu(n);

        
        map<int, vector<int>> primeIndices;

        for (int i = 0; i < n; ++i) {
            int num = nums[i];
            for (int factor = 2; factor <= sqrt(num); ++factor) {
                if (num % factor == 0) {
                    primeIndices[factor].push_back(i);
                    while (num % factor == 0) num /= factor;
                }
            }
            if (num > 1) primeIndices[num].push_back(i); 
        }

       
        for (auto& [prime, indices] : primeIndices) {
            for (int i = 1; i < indices.size(); ++i) {
                dsu.unite(indices[0], indices[i]);
            }
        }

        int root = dsu.find(0);
        for (int i = 1; i < n; ++i) {
            if (dsu.find(i) != root) return false;
        }
        return true;
    }
};   