#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b) {
    if (a == 0) return b; return gcd(b % a, a);
}

int main() {
    long long a, b; cin >> a >> b;
    int g = gcd(a, b);
    cout << a/g << '/' << b/g;
}