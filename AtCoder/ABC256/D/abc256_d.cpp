#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    fastio;
    vector<vector<int>> V, ans;
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        vector<int> interval = {a, b};
        V.push_back(interval);
    }

    sort(V.begin(), V.end());

    for (int i = 0; i < n; i++) {
        if (!ans.empty() && ans.back()[1] >= V[i][0]) {
            ans.back()[1] = max(ans.back()[1], V[i][1]);
        } else {
            ans.push_back(V[i]);
        }
    }

    for (auto x: ans) {
        cout << x[0] << " " << x[1] << endl;
    }
}