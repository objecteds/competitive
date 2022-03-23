#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int a, b, c, d; cin >> a >> b >> c >> d;
    a+c == 180 ? cout << "YES\n" : cout << "NO\n";
}

signed main() {
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}