#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int n, x, p; cin >> n >> x >> p;
    x*3-(n-x) >= p ? cout << "PASS\n" : cout << "FAIL\n";
}

signed main() {
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}