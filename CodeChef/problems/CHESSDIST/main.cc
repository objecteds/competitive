#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;
    cout << max(abs(x1-x2), abs(y1-y2)) << endl;
}

signed main() {
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}