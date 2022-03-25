#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int a, b, c; cin >> a >> b >> c;
    vector<int> V = {a, b, c};
    sort(V.begin(), V.end());
    cout << V[1] + V[2] << endl;
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tc; cin >> tc;
    while (tc--) solve();
}