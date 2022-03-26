#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    string a, b; cin >> a >> b;
    int unk=0, d=0;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] == '?' || b[i] == '?') {
            unk++;
        } else if (a[i] != b[i]) {
            d++;
        }
    }

    cout << d << " " << d+unk << endl;
}

signed main() {
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}