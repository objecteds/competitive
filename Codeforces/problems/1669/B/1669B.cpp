#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
void solve() {
    int n; cin >> n;
    int ans = -1;
    map<int, int> M;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        M[x]++;
        if (M[x] >= 3) {
            ans = x;
        }
    }

    cout << ans << endl;
}

signed main() {
    fastio;
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}