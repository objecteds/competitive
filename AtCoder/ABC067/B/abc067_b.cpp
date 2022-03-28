#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    fastio;
    int n, k, t=0; cin >> n >> k;
    vector<int> V(n);
    for (int i = 0; i < n; i++) cin >> V[i];
    sort(V.rbegin(), V.rend());
    for (int i = 0; i < k; i++) t += V[i];
    cout << t;
}