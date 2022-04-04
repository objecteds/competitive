#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
signed main() {
    fastio;
    int n, t=0; cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];
    while (1) {
        for (int i = 0; i < n; i++) {
            if (A[i] % 2 != 0) {
                cout << t;
                return 0;
            }
            A[i] /= 2;
        }
        t++;
    }
}