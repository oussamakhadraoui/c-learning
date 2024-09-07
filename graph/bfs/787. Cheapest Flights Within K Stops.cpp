#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int dijkstra(vector<vector<pair<int, int>>>& graph, int n, int start, int k,int dst) {
        // Priority queue to store {cost, node, stops}
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        pq.push({0, start, 0});  // Initial state: {cost, start node, 0 stops}

        // To store the minimum cost to reach each node with at most k stops
        vector<vector<int>> dist(n, vector<int>(k + 2, INT_MAX));
        dist[start][0] = 0;

        while (!pq.empty()) {
            int cost = pq.top()[0];
            int node = pq.top()[1];
            int stops = pq.top()[2];
            pq.pop();

            // If we have reached the destination, return the cost
            if (stops > k + 1) continue;

            for (auto& x : graph[node]) {
                int nextNode = x.first;
                int price = x.second;

                // If taking this edge gives a cheaper cost and within allowed stops
                if (cost + price < dist[nextNode][stops + 1]) {
                    dist[nextNode][stops + 1] = cost + price;
                    pq.push({cost + price, nextNode, stops + 1});
                }
            }
        }

        // Find the minimum cost to reach the destination with at most k stops
        int minCost = INT_MAX;
        for (int i = 0; i <= k + 1; i++) {
            minCost = min(minCost, dist[dst][i]);
        }

        return minCost == INT_MAX ? -1 : minCost;
    }

    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        // Build the graph as an adjacency list
        vector<vector<pair<int, int>>> graph(n);
        for (auto& flight : flights) {
            int u = flight[0];
            int v = flight[1];
            int w = flight[2];
            graph[u].push_back({v, w});
        }

        // Run Dijkstra's algorithm with at most k stops
        return dijkstra(graph, n, src, k,dst);
    }
};
