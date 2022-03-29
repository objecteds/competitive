#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    fastio;
    int x, t; cin >> x >> t;
    x - t > 0 ? cout << x-t : cout << 0;
}