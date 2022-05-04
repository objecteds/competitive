#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
signed main() {
    int n, a, b, ans=0; cin >> n >> a >> b;
    for (int i = 1; i <= n; i++) {
        string s = to_string(i);
        int t = 0;
        for (auto x: s) {
            t += x - '0';
        }
        if (t >= a && t <= b) {
            ans += i;
        }
    }

    cout << ans;
}