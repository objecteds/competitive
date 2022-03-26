#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int n, b, best=0; cin >> n >> b;
    for (int i = 0; i < n; i++) {
        int w, h, p; cin >> w >> h >> p;
        int a = w*h;
        if (b >= p) best = max(best, a);
    }

    if (best) cout << best << endl;
    else cout << "no tablet" << endl;
}

signed main() {
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}