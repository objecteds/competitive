#include <bits/stdc++.h>
using namespace std;
int main() {
    unsigned long long t = 1;
    int n, mod=1e9+7; cin >> n;

    for (int i = 1; i <= n; i++) {
        t = ((t % mod) * (i % mod)) % mod;
    }

    cout << t;
}