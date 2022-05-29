#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int a, b, c, x; cin >> a >> b >> c >> x;
    if (x == a || x == b || x == c) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    solve();
}