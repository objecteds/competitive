#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve() {
    int a, b, c; cin >> a >> b >> c;
    cout << max(max(a, b), max(b, c)) << '\n';
}

signed main() {
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}