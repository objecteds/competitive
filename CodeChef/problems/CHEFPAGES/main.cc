#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
void solve() {
    int a, b; cin >> a >> b;
    if (not a) {
        cout << "https://www.codechef.com/practice\n";
    } else if (a && not b) {
        cout << "https://www.codechef.com/contests\n";
    } else {
        cout << "https://discuss.codechef.com\n";
    }
}

signed main() {
    fastio;
    solve();
}