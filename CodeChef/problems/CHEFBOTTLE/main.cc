#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int n, x, k; cin >> n >> x >> k;
    int t = k / x;
    t > n ? cout << n : cout << t;
    cout << endl;
}

signed main() {
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}