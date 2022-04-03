#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
void solve() {
    double n, a, b; cin >> n >> a >> b;
    vector<double> V = {a, b};
    sort(V.begin(), V.end());

    if (V[0]+1 == V[1]) {
        if (V[0] == 1 || V[1] == n) {
            cout << 1/n * n << endl;
        } else {
            cout << 2/n * n << endl;
        }
    } else if (V[0]+2 == V[1]) {
        cout << 1/n * n << endl;
    } else {
        cout << 0 << endl;
    }
}

signed main() {
    fastio;
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}