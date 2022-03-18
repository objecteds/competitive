#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int n, e, a, b;
    cin >> n >> e;
    vector<int> g[10010];

    for (int i = 0; i < e; i++) {
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    for (int i = 1; i <= n; i++) {
        cout << g[i].size() << '\n';
    }
}
