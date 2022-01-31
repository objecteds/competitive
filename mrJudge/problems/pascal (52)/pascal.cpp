#include <bits/stdc++.h>
using namespace std;
int main() {
    int r, c; cin >> r >> c;
    vector<int> dp(r+1);

    dp[0] = 1;

    for (int i = 0; i < r; i++) {
        for (int j = i; j > 0; j--) {
            dp[j] += dp[j-1];
        }
    }

    cout << dp[c-1];
}