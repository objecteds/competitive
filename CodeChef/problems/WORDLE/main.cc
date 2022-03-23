#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    string s, t, m; cin >> s >> t;
    for (int i = 0; i < t.size(); i++) {
        if (t[i] == s[i]) m += "G";
        else m += "B";
    }
    cout << m << endl;
}

signed main() {
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}