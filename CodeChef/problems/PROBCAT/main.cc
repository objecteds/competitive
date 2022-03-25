#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int x; cin >> x;
    if (1 <= x && x < 100) cout << "Easy\n";
    else if (100 <= x && x < 200) cout << "Medium\n";
    else cout << "Hard\n";
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tc; cin >> tc;
    while (tc--) solve();
}