#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    for (int l = 0; l < t; l++) {
        int n; cin >> n;
        int c = (int)sqrt(n) + (int)cbrt(n) - (int)sqrt(cbrt(n));

        cout << c << '\n';
    }
}