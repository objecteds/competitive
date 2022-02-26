#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int a, b, c, x; cin >> a >> b >> c;
    x = a;
    map<int, int> M;

    while (true) {
        int k = (a + c) % b;
        if (M[k] != 0) break;
        M[k] = 1;
        a += x;
    }

    if (M[0] != 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}