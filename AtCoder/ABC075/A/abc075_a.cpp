#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    int a, b, c; cin >> a >> b >> c;
    if (a == b) cout << c;
    else if (a == c) cout << b;
    else cout << a;
}