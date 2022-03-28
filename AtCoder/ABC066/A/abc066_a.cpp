#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
signed main() {
    int a, b, c; cin >> a >> b >> c;
    vector<int> V = {a, b, c};
    sort(V.begin(), V.end());
    cout << V[0] + V[1];
}   