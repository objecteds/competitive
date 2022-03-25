#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int n, s; cin >> n >> s;
    if (n >= s) {
        cout << s << endl;
    } else {
        cout << n*2-s << endl;
    }
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tc; cin >> tc;
    while (tc--) solve();
}