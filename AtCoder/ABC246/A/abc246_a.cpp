#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    int x1, y1, x2, y2, x3, y3;
    int x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    if (x1 == x2) {
        x4 = x3;
    } else if (x2 == x3) {
        x4 = x1;
    } else {
        x4 = x2;
    }

    if (y1 == y2) {
        y4 = y3;
    } else if (y2 == y3) {
        y4 = y1;
    } else {
        y4 = y2;
    }

    cout << x4 << " " << y4;
}