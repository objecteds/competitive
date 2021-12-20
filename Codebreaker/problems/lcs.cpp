#include <bits/stdc++.h>
using namespace std;
int main() {
    string a, b; cin >> a >> b;
    int m = a.size(); int n = b.size();
    vector<vector<int> > dp(m+1, vector<int>(n+1, 0));

    for (int i = m-1; i >= 0; i--) {
        for (int j = n-1; j >= 0; j--) {
            if (a[i] == b[j]) {
                dp[i][j] = dp[i+1][j+1] + 1;
            } else {
                dp[i][j] = max(dp[i+1][j], dp[i][j+1]);
            }
        }
    }
    
    cout << dp[0][0];
}