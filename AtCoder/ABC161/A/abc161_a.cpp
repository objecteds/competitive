#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int x, y, z; cin >> x >> y >> z;
    swap(x, y);
    swap(x, z);
    cout << x << ' ' << y << ' ' << z;
}