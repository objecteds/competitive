#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int n, a, b, c; cin >> n >> a >> b >> c;
    a + c >= n && b >= n ? cout << "YES\n" : cout << "NO\n";
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tc; cin >> tc;
    while (tc--) solve();
}