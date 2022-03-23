#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int x, m, d; cin >> x >> m >> d;
    cout << min(x*m, x+d) << endl;
}

signed main() {
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}