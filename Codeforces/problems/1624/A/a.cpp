#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n, maxv=0, minv=INT_MAX; cin >> n;

        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            maxv = max(maxv, x);
            minv = min(minv, x);
        }

        cout << maxv - minv << '\n';
    }
}