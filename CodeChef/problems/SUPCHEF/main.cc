#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int m, n, k; cin >> m >> n >> k;
    n*k < m ? cout << "YES\n" : cout << "NO\n";
}

signed main() {
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}