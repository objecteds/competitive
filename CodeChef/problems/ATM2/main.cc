#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int n, k; cin >> n >> k;
    string s;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (k >= x) {
            k -= x;
            s += "1";
        } else {
            s += "0";
        }
    }

    cout << s << endl;
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}