#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int a=0, b=0;

    for (auto x: s) {
        if (x == '1') a++;
        else b++;
    }

    if (a == b) cout << a*2;
    else cout << min(a,b)*2+1;
    cout << endl;
}

signed main() {
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}