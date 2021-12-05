#include <bits/stdc++.h>
using namespace std;
long long exponentiation(long long a, long long b, long long m) {
    long long v = 1;
    while (b > 0) {
        if (b & 1) {
            v = (v * a) % m;
        }
        a = (a * a) % m;
        b >>= 1;
    }
    return v;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        long long a, b, m;
        cin >> a >> b >> m;
        cout << exponentiation(a, b, m) << endl;
    }
}