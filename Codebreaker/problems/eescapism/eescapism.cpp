#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    long long n, mod = 1000000007, t=0; cin >> n;

    for (int i = 0; i < n; i++) {
        long long x; cin >> x;
        t += (x*(x+1)/2) % mod;
        t %= mod;
    }

    cout << t % mod;
}