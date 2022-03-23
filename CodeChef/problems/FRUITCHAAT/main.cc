#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int x, y; cin >> x >> y;
    cout << min(x/2, y) << endl;
}

signed main() {
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}