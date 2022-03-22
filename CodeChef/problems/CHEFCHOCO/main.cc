#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve() {
    int c, x, y; cin >> c >> x >> y;
    cout << (c-x)*y << '\n';
}

signed main() {
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}