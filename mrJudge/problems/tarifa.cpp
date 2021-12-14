#include <bits/stdc++.h>
using namespace std;
int main() {
    int x, n; cin >> x >> n;
    int t = x * n;

    for (int i = 0; i < n; i++) {
        int p; cin >> p;
        t -= p;
    }

    t += x;

    cout << t;
}