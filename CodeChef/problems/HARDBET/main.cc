#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int a, b, c; cin >> a >> b >> c;
    int m = min(min(a, b), min(b, c));
    if (m == c) cout << "Alice\n";
    else if (m == b) cout << "Bob\n";
    else cout << "Draw\n";
}

signed main() {
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}