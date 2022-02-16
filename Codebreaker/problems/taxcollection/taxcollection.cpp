#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int n, c=0, t=0; cin >> n;
    vector<int> A(n), B(n), pp, V, P(n);
    for (int i = 0; i < n; i++) cin >> A[i];
    for (int i = 0; i < n; i++) cin >> B[i];

    for (int i = 0; i < n; i++) {
        if (B[i]) {
            pp.push_back(A[i]);
        }
    }

    sort(pp.rbegin(), pp.rend());

    for (int i = 0; i < n; i++) {
        if (B[i]) {
            V.push_back(pp[c]);
            c++;
        } else {
            V.push_back(A[i]);
        }
    }

    P[0] = V[0];

    for (int i = 1; i < n; i++) {
        P[i] = P[i-1] + V[i];
    }

    for (auto x: P) {
        t += x;
    }

    cout << t;
}