#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int x, y, z; cin >> x >> y >> z;
    x+z*2 >= y ? cout << "YES\n" : cout << "NO\n";
}

signed main() {
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}