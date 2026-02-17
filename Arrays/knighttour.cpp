#include <bits/stdc++.h>
using namespace std;

bool isValid(vector<vector<int>>& grid, int r, int c, int n, int expval) {
    // base case: out of bounds OR wrong expected value
    if (r < 0 || c < 0 || r >= n || c >= n || grid[r][c] != expval) {
        return false;
    }

    // base case: reached last value
    if (expval == n * n - 1) {
        return true;
    }

    // 8 knight moves
    bool ans1 = isValid(grid, r - 2, c + 1, n, expval + 1);
    bool ans2 = isValid(grid, r - 1, c + 2, n, expval + 1);
    bool ans3 = isValid(grid, r + 1, c + 2, n, expval + 1);
    bool ans4 = isValid(grid, r + 2, c + 1, n, expval + 1);
    bool ans5 = isValid(grid, r + 2, c - 1, n, expval + 1);
    bool ans6 = isValid(grid, r + 1, c - 2, n, expval + 1);
    bool ans7 = isValid(grid, r - 1, c - 2, n, expval + 1);
    bool ans8 = isValid(grid, r - 2, c - 1, n, expval + 1);

    return ans1 || ans2 || ans3 || ans4 || ans5 || ans6 || ans7 || ans8;
}

bool checkValidGrid(vector<vector<int>>& grid) {
    int n = grid.size();
    return isValid(grid, 0, 0, n, 0);
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> grid(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    if (checkValidGrid(grid)) {
        cout << "true\n";
    } else {
        cout << "false\n";
    }

    return 0;
}
