#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int n, t=0; cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];

    for (int i = 0; i < n; i++) {
        int sum=0, prod=1;
        for (int j = i; j < n; j++) {
            sum += A[j];
            prod *= A[j];
            if (sum == prod) {
                t++;
            }
        }
    }

    cout << t << endl;
}

signed main() {
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}