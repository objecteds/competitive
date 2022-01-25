#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    if (n % m == 0) {
        for (int i = 0; i < n; i++) {
            cout << n / m << ' ';
        }
    } else {
        for (int i = 0; i < m-1; i++) {
            cout << 1 << ' ';
        }
        for (int i = 0; i < n-(m-1); i++) {
            cout << n-(m-1) << ' ';
        }
    }
}