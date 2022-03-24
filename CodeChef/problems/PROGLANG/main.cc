#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int a,b,a1,b1,a2,b2; 
    cin >> a >> b >> a1 >> b1 >> a2 >> b2;

    if ((a1 == a && b1 == b) || (a1 == b && b1 == a)) {
        cout << 1;
    } else if ((a2 == a && b2 == b) || (a2 == b && b2 == a)) {
        cout << 2;
    } else {
        cout << 0;
    }
    cout << endl;
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}