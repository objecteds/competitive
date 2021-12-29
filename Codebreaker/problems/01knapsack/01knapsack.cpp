#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, w; cin >> n >> w;
    vector<int> wt(n), val(n);

    for (int i = 0; i < n; i++) {
        cin >> wt[i] >> val[i];
    }

    vector<vector<long long> > dp(n+1, vector<long long>(w+1));

    for (int i = 0; i < n + 1; i++) {
        dp[i][0] = 0;
    }

    for (int i = 0; i < w + 1; i++) {
        dp[0][i] = 0;
    }

    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < w + 1; j++) {
            long long x = dp[i-1][j];
            long long y = 0;
            long long cur = wt[i-1];

            if (j >= cur) {
                y = val[i-1];
                int cap = j - cur;
                y += dp[i-1][cap];
            }

            dp[i][j] = max(x, y);
        }
    }

    cout << dp[n][w];
}