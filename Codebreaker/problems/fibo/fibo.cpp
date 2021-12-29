#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5+10;
const int mod = 998244353;
int f[maxn];

int fibo(int n) {
    if (f[n] != -1) {
        return f[n];
    } else {
        return f[n] = (fibo(n-1) % mod + fibo(n-2) % mod);
    }
}

int main() {
    int n; cin >> n;
    memset(f, -1, sizeof(f));
    f[0] = 0, f[1] = 1;
    
    for (int i = 0; i <= n; i++) {
        cout << fibo(i) % mod << '\n';
    }
}