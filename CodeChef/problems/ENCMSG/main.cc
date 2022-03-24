#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int n; cin >> n;
    string s; cin >> s;

    if (n % 2 == 0) {
        for (int i = 0; i < n; i += 2) swap(s[i], s[i+1]);
    } else {
        n -= 1;
        for (int i = 0; i < n; i += 2) swap(s[i], s[i+1]);
    }

    for (auto x: s) {
        char y = 'z' - x + 'a';
        cout << y;
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