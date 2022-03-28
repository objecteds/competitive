#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
signed main() {
    ios::sync_with_stdio(false); cin.tie(0);

    int n, k; cin >> n;
    deque<int> d;
    bool ok = true;

    for (int i = 0; i < n; i++) {
        cin >> k;
        if (ok) {
            d.push_front(k);
            ok = false;
        } else {
            d.push_back(k);
            ok = true;
        }
    }

    if (not ok) {
        for (auto x: d) {
            cout << x << ' ';
        }
    } else {
        for (int i = d.size()-1; i >= 0; i--) {
            cout << d[i] << ' ';
        }
    }
}