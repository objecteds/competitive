#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int n; cin >> n;
    string s; cin >> s;
    map<char, int> M;
    bool ok = true;

    for (auto x: s) {
        M[x]++;
    }

    for (auto x: s) {
        if (M[x]%2!=0) {
            ok = false;
            break;
        }
    }

    ok ? cout << "YES\n" : cout << "NO\n";
}

signed main() {
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}