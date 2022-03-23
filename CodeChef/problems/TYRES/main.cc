#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int n; cin >> n;
    n%4 >= 2 ? cout << "YES\n" : cout << "NO\n";
}

signed main() {
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}