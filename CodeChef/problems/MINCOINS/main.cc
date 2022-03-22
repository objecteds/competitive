#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int tc; cin >> tc;
    while (tc--) {
        int x; cin >> x;
        if (x % 5 == 0) {
            int t = x/5;
            x % 2 == 0 ? cout << t/2 : cout << (t/2)+1;
        } else {
            cout << -1;
        }
        cout << '\n';
    }
}