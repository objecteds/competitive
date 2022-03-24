#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int n, p, x, y, t=0; cin >> n >> p >> x >> y;
    vector<int> V(n);
    for (int i = 0; i < n; i++) cin >> V[i];

    for (int i = 0; i < p-1; i++) {
        V[i] ? t += y : t += x;
    }

    cout << t + y << endl;
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}