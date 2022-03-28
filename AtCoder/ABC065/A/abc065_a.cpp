#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
signed main() {
    int x, a, b; cin >> x >> a >> b;
    int t = b-a; // days after best-by date
    if (t <= 0) {
        cout << "delicious";
    } else if (t > x) {
        cout << "dangerous";
    } else {
        cout << "safe";
    }
}   