#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
void solve() {
    int n; cin >> n;
    bool ok = true;
    vector<int> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];
    sort(A.begin(), A.end());
    vector<int> adiff;

    for (int i = 0; i < n-1; i++) {
        adiff.push_back(A[i+1]-A[i]);
    }

    for (int i = 0; i < n-2; i++) {
        if (adiff[i]*2 != adiff[i+1] && adiff[i]/2 != adiff[i+1]) ok = false;
    }

    ok ? cout << "Yes\n" : cout << "No\n";
}

signed main() {
    int tc; cin >> tc;
    while (tc--) solve();
}