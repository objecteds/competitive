#include <bits/stdc++.h>
using namespace std;
int main() {
    int w, a, b; cin >> w >> a >> b;
    if (abs(a-b) <= w) {
        cout << 0;
    } else {
        cout << abs(a-b) - w;
    }
}