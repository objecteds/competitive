#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<int> v;
    int lo = 0, hi = 1000000001;

    for (int i = 0; i < m; i++) {
        int x; cin >> x;
        v.push_back(x);
    }

    while (lo <= hi) {
        int x = (lo + hi) / 2;
        long long cont = 0;

        for (int i = 0; i < m; i++) {
            cont += (v[i] + x - 1) / x;
        }

        if (cont <= n) {
            hi = x - 1;
        } else {
            lo = x + 1;
        }
    }

    cout << lo;
}