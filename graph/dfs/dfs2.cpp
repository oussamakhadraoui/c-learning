// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Visited array to keep visited marker
// for DFS traversal
vector<bool> vis;

// Function to perform DFS
// Traversal on the given graph
void DFS(int u, vector<vector<int> > adj)
{
    vis[u] = 1;
    for (int v : adj[u]) {
        if (vis[v] == 0)
            DFS(v, adj);
    }
}

// Function to print the array
void printResult(vector<vector<int> > res)
{
    for (int i = 0; i < res.size(); i++) {
        cout << i << " -> ";
        for (int j : res[i]) {
            cout << j << " ";
        }
        cout << "\n";
    }
}

void solve(int n, vector<vector<int> > edges)
{

    // Create an adjancency list with
    // edges reversed
    vector<vector<int> > adj(n);

    for (int i = 0; i < edges.size(); i++) {
        int u = edges[i][0], v = edges[i][1];
        adj[v].push_back(u);
    }

    // Resultant vector where for each
    // index i from 0 to n-1 the resultant
    // sorted ancestors vector for ith
    // index will be stored
    vector<vector<int> > res(n);
    vector<int> arr;

    for (int i = 0; i < n; i++) {

        // Assign 0 to vis array
        vis.assign(n, 0);

        // Call DFS for the ith node
        DFS(i, adj);
        arr.clear();

        for (int j = 0; j < n; j++) {

            // All the ancestors for node i
            // will be visited after DFS call

            if (vis[j] && i != j) {
                arr.push_back(j);
                j=n;
            }
        }

        // Store the resultant arr in the
        // corresponding index
        res[i] = arr;
    }

    printResult(res);
}

// Drivers code
int main()
{
    int N = 5;
    vector<vector<int> > Edges
        = { { 0, 4 }, { 4, 1 }, { 4, 3 }, { 1, 2 } };

    // Function Call
    solve(N, Edges);

    return 0;
}