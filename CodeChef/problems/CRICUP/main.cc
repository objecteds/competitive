#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int x, y, d; cin >> x >> y >> d;
    int diff = abs(x-y);
    diff <= d ? cout << "YES\n" : cout << "NO\n";
}

signed main() {
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}