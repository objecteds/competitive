#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
void solve() {
    int n, t=0; cin >> n;
    set<int> S;
    vector<int> V, L;
    map<int, int> M;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        M[x]++;
        S.insert(x);
    }

    for (auto x: S) {
        int c = M[x];
        for (int i = 0; i < c/2; i++) V.push_back(x);
        if (M[x] % 2 != 0) L.push_back(x);
    }

    t += L.size();

    if ((V.size() + L.size()) % 2 != 0) {
        t += 2;
    }

    cout << t << endl;
}

signed main() {
    fastio;
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}