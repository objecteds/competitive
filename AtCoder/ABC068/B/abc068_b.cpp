#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    fastio;
    int n, best=0, ans=0; cin >> n;
    for (int i = 1; i <= n; i++) {
        int x = log2(i);
        if (x > best) {
            best = x;
            ans = i;
        }
    }
    if (n < 2) {
        ans = 1;
    }
    cout << ans;
}