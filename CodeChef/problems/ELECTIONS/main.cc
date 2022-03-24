#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int a, b, c; cin >> a >> b >> c;
    if (a > 50) cout << "A\n";
    else if (b > 50) cout << "B\n";
    else if (c > 50) cout << "C\n";
    else cout << "NOTA\n";
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}