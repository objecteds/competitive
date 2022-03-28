#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
signed main() {
    int n, t=0; cin >> n;
    vector<int> V;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        t += x;
        if (x % 10 != 0) V.push_back(x);
    }

    sort(V.rbegin(), V.rend());

    if (t % 10 == 0) {
        if (V.size()) t -= V.back();
        else t = 0;
    }

    cout << t;
}   