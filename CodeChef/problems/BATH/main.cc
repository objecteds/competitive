#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int x, y; cin >> x >> y;
    cout << x / (y*2) << endl;
}

signed main() {
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}