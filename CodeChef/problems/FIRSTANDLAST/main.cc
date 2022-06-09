#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
void solve() {
    int n, best=0; cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    if (n == 2) cout << A[0] + A[1];
    else {
        for (int i = 1; i < n; i++) {
            best = max(A[i] + A[i-1], best);
        }
        best = max(A[0] + A.back(), best);
        cout << best;
    }

    cout << endl;
}
signed main() {
    fastio;
    int tc; cin >> tc;
    while (tc--) solve();
}
