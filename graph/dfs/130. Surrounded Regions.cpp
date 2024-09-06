#include <bits/stdc++.h>
using namespace std;
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
class Solution {
public:
    int n, m;
    bool vis[201][201];
    bool isOk(int i, int j) { return i >= 0 && j >= 0 && i < n && j < m; }
    void dfs(vector<vector<char>>& board, int i, int j) {
        if (!isOk(i, j) || board[i][j] != 'O' || vis[i][j])
            return;

        vis[i][j] = true;
        board[i][j] = '#';

        for (int x = 0; x < 4; ++x) {
            int X = dx[x] + i;
            int Y = dy[x] + j;
            dfs(board, X, Y);
        }
    }
    void solve(vector<vector<char>>& board) {
        this->n = board.size();
        this->m = board[0].size();

        unordered_map<string, int> rec;
        for (int i = 0; i < m; i++) {
            if (board[0][i] == 'O')
                dfs(board, 0, i);
            if (board[n - 1][i] == 'O')
                dfs(board, n - 1, i);
        }

        for (int i = 0; i < n; i++) {
            if (board[i][0] == 'O')
                dfs(board, i, 0);
            if (board[i][m - 1] == 'O')
                dfs(board, i, m - 1);
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == 'O')
                    board[i][j] = 'X';
                else if (board[i][j] == '#')
                    board[i][j] = 'O';
            }
        }
    }
};