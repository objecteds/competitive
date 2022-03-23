#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int a, b, c; cin >> a >> b >> c;
    int t = a+b+c - min(min(a,b),min(b,c));
    cout << t << endl;
}

signed main() {
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}