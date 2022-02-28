#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int n, m, t=0, c=0; cin >> n >> m;
    vector<int> A;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        t += x;
        A.push_back(x);
    }

    long double threshold = (long double)t / (long double)(4 * m);

    for (auto x: A) {
        if (x >= threshold) {
            c++;
        }
    }

    if (c >= m) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}