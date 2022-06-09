#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
void solve() {
    int n, x; cin >> n >> x;
    if (n % 2 == 0) cout << "yes\n";
    else if ((n-x) % 2 == 0) cout << "yes\n";
    else cout << "no\n";
}
signed main() {
    fastio;
    int tc; cin >> tc;
    while (tc--) solve();
}