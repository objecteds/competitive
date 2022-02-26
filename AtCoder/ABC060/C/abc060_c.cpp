#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int n, t; cin >> n >> t;
    int x = t;
    vector<int> T(n);

    for (int i = 0; i < n; i++) cin >> T[i];

    for (int i = 0; i < n-1; i++) {
        x += min(T[i+1] - T[i], t);
    }

    cout << x;
}