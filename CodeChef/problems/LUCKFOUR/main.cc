#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    string s; cin >> s;
    int t=0;
    for (auto x: s) {
        if (x == '4') t++;
    }
    cout << t << endl;
}

signed main() {
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}