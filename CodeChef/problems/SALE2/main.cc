#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int tc; cin >> tc;
    while (tc--) {
        int n, x, t=0; cin >> n >> x;
        for (int i = 1; i <= n; i++) {
            i % 3 != 0 ? t += x : t += 0;
        }
        cout << t << '\n';
    }
}