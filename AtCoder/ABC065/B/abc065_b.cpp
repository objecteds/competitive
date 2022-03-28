#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
signed main() {
    int n; cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];

    int cur = 1, t=0;
    for (int i = 0; i < 1000000; i++) {
        if (cur == 2) {
            cout << t;
            return 0;
        }
        cur = A[cur-1];
        t++;
    }
    cout << -1;
}   