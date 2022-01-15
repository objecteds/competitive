#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        long long x, y; cin >> x >> y;
        
        if (x < y) {
            y % 2 != 0 ? cout << y*y - x + 1 << '\n' : cout << (y-1) * (y-1) + x << '\n';
        } else {
            x % 2 == 0 ? cout << x*x - y + 1 << '\n' : cout << (x-1) * (x-1) + y << '\n';
        }
    }
}