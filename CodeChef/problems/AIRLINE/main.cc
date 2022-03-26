#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int a, b, c, d, e; cin >> a >> b >> c >> d >> e;
    if (
        (a+b <= d && c <= e) 
        || (b+c <= d && a <= e)
        || (c+a <= d && b <= e)
    ) cout << "YES\n";
    else cout << "NO\n";
}

signed main() {
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}