#include <bits/stdc++.h>
using namespace std;
int main() {
    long long t, n;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;
        cout << fixed << setprecision(0) << cbrt(n) << '\n';
    }
}