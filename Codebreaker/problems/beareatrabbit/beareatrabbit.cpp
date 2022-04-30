#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
const int maxn = 1000000;
int n, A[maxn+1], dptable[maxn+1];
int dp(int i) {
    if (i <= 0) return 0;
    if (dptable[i] != -1) return dptable[i];
    return dptable[i] = max(dp(i-1), dp(i-2) + A[i]);
}

int bottom_up_dp() {
    dptable[0] = 0;
    dptable[1] = max(A[1], (long long)0);
    for (int i = 2; i <= n; i++) {
        dptable[i] = max(dptable[i-1], dptable[i-2] + A[i]);
    }
    return dptable[n];
}

signed main() {
    fastio;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> A[i];
    fill_n(dptable, maxn, -1);
    cout << dp(n);
}