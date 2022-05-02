#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
void solve() {
    int n; cin >> n;
    if (n % 2 == 0) cout << n/2*3;
    else cout << (n-1)/2*3;
    cout << endl;
}

signed main() {
    int tc; cin >> tc;
    while (tc--) solve();
}