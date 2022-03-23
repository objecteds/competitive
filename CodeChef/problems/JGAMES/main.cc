#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int x, y; cin >> x >> y;
    (x+y) % 2 == 0 ? cout << "Janmansh\n" : cout << "Jay\n";
}

signed main() {
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}