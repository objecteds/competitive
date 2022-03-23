#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int a, b; cin >> a >> b;
    a+b+10<21? cout << -1 : cout << 21-a-b;
    cout << endl;
}

signed main() {
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}