#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int x; cin >> x;
        bool ok = false;
        for (int i = 0; i < 20; i++) {
            if (x % 11 == 0) {
                ok = true;
            }

            x -= 111;

            if (x < 0) {
                break;
            }
        }
        ok ? cout << "YES\n" : cout << "NO\n";
    }
}