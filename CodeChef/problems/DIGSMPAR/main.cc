#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
int digitsum(string s) {
    int t = 0;
    for (auto x: s) {
        t += x - '0';
    }
    return t;
}
void solve() {
    int n; cin >> n;
    int m = n + 1;

    while (digitsum(to_string(m)) % 2 == digitsum(to_string(n)) % 2) {
        m++;
    }

    cout << m << endl;
}

signed main() {
    fastio;
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}