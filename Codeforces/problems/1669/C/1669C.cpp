#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
void solve() {
    int n; cin >> n;
    bool ok = true;
    vector<int> V(n);

    for (int i = 0; i < n; i++) {
        cin >> V[i];
    }

    for (int i = 2; i < n; i++) {
        if (V[i] % 2 != V[i-2] % 2) ok = false;
    }

    ok ? cout << "YES\n" : cout << "NO\n";
}

signed main() {
    fastio;
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}