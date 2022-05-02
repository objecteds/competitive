#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
void solve() {
    int n; cin >> n;
    if (n <= 2) cout << 1 << endl;
    if (n == 3) cout << 2 << endl;
    if (n >= 4) cout << n << endl;
}

signed main() {
    int tc; cin >> tc;
    while (tc--) solve();
}