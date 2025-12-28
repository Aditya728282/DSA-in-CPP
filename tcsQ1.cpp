#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
using namespace std;

struct Cell {
    int x, y, dist;
};

bool isValid(int x, int y, int M, int N, vector<vector<int>>& grid) {
    return (x >= 0 && x < M && y >= 0 && y < N && grid[x][y] == 0);
}

int bfs(vector<vector<int>>& grid, int M, int N, pair<int, int> src, pair<int, int> dest, pair<int, int> moveRule) {
    vector<vector<bool>> visited(M, vector<bool>(N, false));
    queue<Cell> q;

    // Initialize the BFS queue with the source cell
    q.push({src.first, src.second, 0});
    visited[src.first][src.second] = true;

    // Four directions: forward, right, left, backward
    int dx[] = {moveRule.first, moveRule.second, -moveRule.first, -moveRule.second};
    int dy[] = {moveRule.second, -moveRule.first, -moveRule.second, moveRule.first};

    while (!q.empty()) {
        Cell curr = q.front();
        q.pop();

        // If we reach the destination, return the distance
        if (curr.x == dest.first && curr.y == dest.second) {
            return curr.dist;
        }

        // Explore the four possible moves (forward, right, left, backward)
        for (int i = 0; i < 4; i++) {
            int newX = curr.x + dx[i];
            int newY = curr.y + dy[i];

            // Check if the move is valid and not yet visited
            if (isValid(newX, newY, M, N, grid) && !visited[newX][newY]) {
                visited[newX][newY] = true;
                q.push({newX, newY, curr.dist + 1});
            }
        }
    }

    // If no path to destination
    return -1;
}

int main() {
    int M, N;
    cin >> M >> N;

    // Input the grid
    vector<vector<int>> grid(M, vector<int>(N));
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
        }
    }

    // Input the source and destination cells
    pair<int, int> src, dest;
    cin >> src.first >> src.second;
    cin >> dest.first >> dest.second;

    // Input the move rule
    pair<int, int> moveRule;
    cin >> moveRule.first >> moveRule.second;

    // Get the result using BFS
    int result = bfs(grid, M, N, src, dest, moveRule);

    // Print the minimum number of moves
    cout << result << endl;

    return 0;
}
