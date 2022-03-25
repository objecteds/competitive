#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int d, l, r; cin >> d >> l >> r;
    if (d < l) cout << "Too Early\n";
    else if (d > r) cout << "Too Late\n";
    else cout << "Take second dose now\n";
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tc; cin >> tc;
    while (tc--) solve();
}