#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int n, x, best=0; cin >> n >> x;
    for (int i = 0; i < n; i++) {
        int s, r; cin >> s >> r;
        if (x >= s) best = max(best, r);
    }
    cout << best << endl;
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tc; cin >> tc;
    while (tc--) solve();
}