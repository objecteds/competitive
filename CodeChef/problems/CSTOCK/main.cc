#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    double s, a, b, c; cin >> s >> a >> b >> c;
    c /= 100;
    double t=s*(1+c);

    if (a <= t && t <= b) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tc; cin >> tc;
    while (tc--) solve();
}