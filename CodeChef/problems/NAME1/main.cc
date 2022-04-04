#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
void solve() {
    string a, b, c="", d; cin >> a >> b;
    int n; cin >> n;
    map<char, int> X, Y;
    set<char> S;
    bool ok = true;
    d = a+b;

    for (int i = 0; i < n; i++) {
        string x; cin >> x;
        c += x;
    }

    for (auto x: c) {
        X[x]++;
        S.insert(x);
    }
    
    for (auto x: d) {
        Y[x]++;
        S.insert(x);
    }

    for (auto x: S) {
        if (X[x] > Y[x]) {
            ok = false;
        }
    }

    ok ? cout << "YES\n" : cout << "NO\n";
}

signed main() {
    fastio;
    int tc; cin >> tc;
    while (tc--) solve();
}