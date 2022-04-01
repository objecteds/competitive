#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    int n, k, t=1; cin >> n >> k;
    for (int i = 0; i < n; i++) {
        if (t*2 <= t+k) t *= 2;
        else t += k;
    }
    cout << t;
}