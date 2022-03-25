#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    string s; cin >> s;
    for (int i = 2; i < s.size(); i++) {
        if ((s[i-2] == '0' && s[i-1] == '1' && s[i] == '0') || (s[i-2] == '1' && s[i-1] == '0' && s[i] == '1')) {
            cout << "Good\n";
            return;
        }
    }
    cout << "Bad\n";
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tc; cin >> tc;
    while (tc--) solve();
}