#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    int n, k; cin >> n >> k;
    vector<long long> a;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        a.push_back(x);
    }

    sort(a.rbegin(), a.rend());

    long long lo = 1, hi = a[0];

    while (lo <= hi) {
        long long x = (lo + hi) >> 1;
        long long total = k;
        bool ok = true;

        for (int i = 0; i < n; i++) {
            if (a[i] <= x) {
                break;
            }
            total -= (a[i] - 1) / x;

            if (total < 0) {
                ok = false;
                break;
            }
        }

        if (ok) {
            hi = x - 1;
        } else {
            lo = x + 1;
        }
    }

    cout << lo;
}