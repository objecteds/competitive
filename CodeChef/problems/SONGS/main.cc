#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
void solve() {
    int n, x; cin >> n >> x;
    cout << n / x / 3 << endl;
}
signed main() {
    fastio;
    int tc; cin >> tc;
    while (tc--) solve();
}
