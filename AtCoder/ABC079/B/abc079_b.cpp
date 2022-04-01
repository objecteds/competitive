#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    int n; cin >> n;
    vector<int> V(90);
    V[0] = 2;
    V[1] = 1;
    for (int i = 2; i < 89; i++) {
        V[i] = V[i-1] + V[i-2];
    }
    cout << V[n];
}