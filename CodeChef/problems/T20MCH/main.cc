#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int r, o, c; cin >> r >> o >> c;
    (20-o)*36 + c > r ? cout << "YES\n" : cout << "NO\n";
}

signed main() {
    solve();
}