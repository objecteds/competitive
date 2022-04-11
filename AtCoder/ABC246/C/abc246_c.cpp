#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    fastio;
    int n, k, x, t=0; cin >> n >> k >> x;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        int c; cin >> c;
        A[i] = c;
        t += c;
    }

    sort(A.rbegin(), A.rend());

    for (int i = 0; i < n; i++) {
        if (k <= 0) break;
        int used = min(k, A[i]/x);
        t -= used*x;
        A[i] -= used*x;
        k -= used;
    }

    if (k > 0) {
        sort(A.rbegin(), A.rend());
        for (auto c: A) {
            if (k <= 0) break;
            t -= c;
            k -= 1;
        }
    }

    cout << t;
}