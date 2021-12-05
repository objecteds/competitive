#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t, i = 0;
    cin >> n >> t;

    while (n != 1) {
        i++;
        if (t == i) {
            break;
        }

        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }

    if (n == 1 && t != i) {
        cout << -1;
    } else {
        cout << n;
    }
}