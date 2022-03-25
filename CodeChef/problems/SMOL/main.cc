#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int n, k; cin >> n >> k;
    k > 0 ? cout << n % k << endl : cout << n << endl;
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tc; cin >> tc;
    while (tc--) solve();
}