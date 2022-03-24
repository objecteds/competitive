#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int n; cin >> n;
    if (n % 2 != 0) {
        cout << -((n+1)/2) << endl;
    } else {
        cout << n/2 << endl;
    }
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}