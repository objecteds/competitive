#include <bits/stdc++.h>
using namespace std;
int main() {
    long long m=1e9+9, t=1;

    for (int i = 0; i < 5; i++) {
        long long x; cin >> x;
        t *= x % m;
        t %= m;
    }

    cout << t;
}