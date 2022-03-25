#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    double w1, w2, x1, x2, m; cin >> w1 >> w2 >> x1 >> x2 >> m;
    double d = (w2-w1)/m;
    if (d <= x2 && d >= x1) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tc; cin >> tc;
    while (tc--) solve();
}