#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int n, x; cin >> n >> x;
    if (x <= n) {
        cout << 2*n-(x-1) << endl;
    } else {
        cout << (2*n-x)+1 << endl;
    }
}

signed main() {
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}
