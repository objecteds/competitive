#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int n, t=0; cin >> n;
    vector<int> S(n), D(n);
    for (int i = 0; i < n; i++) cin >> S[i];
    for (int i = 0; i < n; i++) cin >> D[i];

    for (int i = 0; i < n; i++) {
        if (S[i] == D[i]) {
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