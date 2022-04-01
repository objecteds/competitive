#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    int x, y, z; cin >> x >> y >> z;
    x -= z;
    cout << x/(y+z);
}