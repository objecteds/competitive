#include <bits/stdc++.h>
using namespace std;
int main() {
    unsigned long long n, m; cin >> n >> m;

    if (n >= m/2) {
        cout << m/2;
    } else {
        m -= n * 2;
        m /= 4;
        cout << m + n;
    }
}