#include <bits/stdc++.h>
using namespace std;
int main() {
    int l, r, a; cin >> l >> r >> a;

    while (a > 0) {
        if (l > r) {
            r++;
        } else {
            l++;
        }
        a--;
    }

    cout << min(l, r) * 2;
}