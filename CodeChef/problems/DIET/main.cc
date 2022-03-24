#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int n, k, t=0; cin >> n >> k;
    vector<int> V(n); 
    for (int i = 0; i < n; i++) cin >> V[i];
    for (int i = 0; i < n; i++) {
        t += V[i];
        t -= k;
        if (t < 0) {
            cout << "NO " << i+1 << endl;
            return;
        }
    }
    cout << "YES\n";
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}