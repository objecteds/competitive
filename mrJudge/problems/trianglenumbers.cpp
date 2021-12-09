#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x = 0; cin >> n;

    for (int i = 1; i <= n; i++) {
        x += i;
    }

    cout << x;
}