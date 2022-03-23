#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve() {
    int x, a, b; cin >> x >> a >> b;
    a+b*2 >= x ? cout << "Qualify\n" : cout << "NotQualify\n";
}

signed main() {
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}