#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
signed main() {
    int n, t=0; cin >> n;
    for (int i = 1; i <= 9999999; i++) {
        t += i;
        if (t >= n) {
            cout << i;
            break;
        }
    }
}