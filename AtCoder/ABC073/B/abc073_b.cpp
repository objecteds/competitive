#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    fastio;
    int n, t=0; cin >> n;
    vector<int> V(100000);
    for (int i = 0; i < n; i++) {
        int l, r; cin >> l >> r;
        for (int j = l-1; j < r; j++) {
            V[j] = 1;
        }
    }
    for (auto x: V) {
        if (x) t++;
    }
    cout << t;
}