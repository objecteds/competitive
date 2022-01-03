#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a, b, x, y, z; cin >> a >> b >> x;
    y = b / x + 1;
    if (a-1 >= 0) {
        z = (a-1) / x + 1;
    } else {
        z = 0;
    }

    cout << y - z;
}