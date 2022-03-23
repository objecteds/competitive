#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve() {
    int x, y; cin >> x >> y;
    if (x == y) {
        cout << "SAME\n";
    } else if (x > y) {
        cout << "CAR\n";
    } else {
        cout << "BIKE\n";
    }
}

signed main() {
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}