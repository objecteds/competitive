#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int n; cin >> n;
    int x = (double)log(n)/(double)log(2);
    cout << n-1-x << endl;
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}