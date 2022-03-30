#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int x,y,a,b,t=2; cin >> x >> y >> a >> b;
    if (x==a || x==b) {
        t--;
    }
    if (y==a || y==b) {
        t--;
    }
    cout << t << endl;
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tc; cin >> tc;
    while (tc--) solve();
}