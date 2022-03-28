#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
signed main() {
    int n, t=0; cin >> n;
    vector<int> V(9, 0);

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x >= 1 && x <= 399) V[0]++;
        else if (x >= 400 && x <= 799) V[1]++;
        else if (x >= 800 && x <= 1199) V[2]++;
        else if (x >= 1200 && x <= 1599) V[3]++;
        else if (x >= 1600 && x <= 1999) V[4]++;
        else if (x >= 2000 && x <= 2399) V[5]++;
        else if (x >= 2400 && x <= 2799) V[6]++;
        else if (x >= 2800 && x <= 3199) V[7]++;
        else V[8]++;
    }

    for (int i = 0; i < 8; i++) {
        if (V[i]) t++;
    }

    if (t > 0) {
        cout << t << " " << t+V[8];
    } else {
        cout << 1 << " " << V[8];
    }
}   