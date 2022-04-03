#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
void solve() {
    int d; cin >> d;
    string s; cin >> s;
    map<char, int> M;

    for (auto x: s) {
        M[x]++;
    }

    if (M['5'] > 0 || M['0'] > 0) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}

signed main() {
    fastio;
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}