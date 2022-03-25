#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    double u, v, a, s; cin >> u >> v >> a >> s;
    double x = u*u - 2*a*s;
    v*v >= x ? cout << "Yes\n" : cout << "No\n";
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tc; cin >> tc;
    while (tc--) solve();
}