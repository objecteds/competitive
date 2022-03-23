#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve() {
    int n; cin >> n;
    n % 4 == 0 ? cout << "Good\n" : cout << "Not Good\n";
}

signed main() {
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}