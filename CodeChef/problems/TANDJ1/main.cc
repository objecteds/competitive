#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int a, b, c, d, k; cin >> a >> b >> c >> d >> k;
    int t = abs(a-c) + abs(b-d);
    if (k >= t && (k-t) % 2 == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tc; cin >> tc;
    while (tc--) solve();
}