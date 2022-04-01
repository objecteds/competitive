#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int a, b, c, d; cin >> a >> b >> c >> d;
    if (a < c) {
        cout << "Takahashi\n";
    } else if (a == c) {
        if (b < d+1) {
            cout << "Takahashi\n";
        } else {
            cout << "Aoki\n";
        }
    } else {
        cout << "Aoki\n";
    }
}