#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int n, t=0; cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x >= 10 && x <= 60) {
            t++;
        }
    }
    cout << t << endl;
}

signed main() {
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}