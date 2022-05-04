#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
signed main() {
    int a, b, c, d; cin >> a >> b >> c >> d;
    if (a+b < c+d) cout << "Right";
    else if (a+b > c+d) cout << "Left";
    else cout << "Balanced";
}