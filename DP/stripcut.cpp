#include <bits/stdc++.h>
using namespace std;

int minCost(int n, vector<int>& cuts) {

    cuts.push_back(0);
    cuts.push_back(n);

    sort(cuts.begin(), cuts.end());

    int m = cuts.size();

    vector<vector<int>> dp(m, vector<int>(m, 0));

    for(int len = 2; len < m; len++) {
        for(int i = 0; i + len < m; i++) {

            int j = i + len;
            dp[i][j] = INT_MAX;

            for(int k = i + 1; k < j; k++) {

                int cost = cuts[j] - cuts[i] + dp[i][k] + dp[k][j];

                dp[i][j] = min(dp[i][j], cost);
            }
        }
    }

    return dp[0][m-1];
}

int main() {

    int n = 7;
    vector<int> cuts = {1,3,4,5};

    cout << minCost(n, cuts);

    return 0;
}
