#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
void solve() {
    int n, m; cin >> n >> m;
    bool valid = true, strong = true;
    for (int i = 0; i < n; i++) {
        string a, b; cin >> a >> b;
        if (a == "correct") {
            for (auto x: b) {
                if (x == '0') {
                    valid = false;
                    break;
                }
            }
        } else {
            bool wrong = false;
            for (auto x: b) 
                if (x == '0') wrong = true;
            if (not wrong) {
                strong = false;
            }
        }
    }

    if (not valid) cout << "INVALID\n";
    else if (not strong) cout << "WEAK\n";
    else cout << "FINE\n";
}

signed main() {
    fastio;
    int tc; cin >> tc;
    while (tc--) solve();
}