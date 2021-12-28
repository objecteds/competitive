#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, l, t, ans=0; cin >> n >> l >> t;
    int fuel = t;
    vector<int> f;
    bool ok = true;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        f.push_back(x);
    }

    f.push_back(l);

    sort(f.begin(), f.end());

    fuel -= f[0];

    if (fuel < 0) {
        ok = false;
    }

    for (int i = 0; i < n; i++) {
        if (f[i+1] - f[i] > t) {
            ok = false;
            break;
        } 

        if (f[i+1] - f[i] > fuel) {
            fuel = t;
            ans++;
        } 

        fuel -= f[i+1] - f[i];
    }

    ok ? cout << ans : cout << -1;
}