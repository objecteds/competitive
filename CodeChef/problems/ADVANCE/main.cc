#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
void solve() {
    int x, y; cin >> x >> y;
    if (y >= x && y <= x + 200) cout << "yes\n";
    else cout << "no\n";
}
signed main() {
    fastio;
    int tc; cin >> tc;
    while (tc--) solve();
}