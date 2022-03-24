#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int n, m; cin >> n >> m;
    n % 2 != 0 && m % 2 != 0 ? cout << "NO\n" : cout << "YES\n";
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}