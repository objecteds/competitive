#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
signed main() {
    int n; cin >> n;
    vector<int> V(n);
    for (int i = 0; i < n; i++) cin >> V[i];
    sort(V.begin(), V.end());
    cout << V.back() - V[0];
}   