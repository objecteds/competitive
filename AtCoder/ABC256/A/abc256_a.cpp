#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    fastio;
    int x, ans=1; cin >> x;
    for (int i = 0; i < x; i++) {
        ans *= 2;
    }
    cout << ans;
}