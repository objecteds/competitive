#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        unsigned long long n; cin >> n;
        cout << n - n / 2 - n / 3 - n / 5 - n / 7 + n / 6 + n / 10 + n / 14 + n / 15 + n / 21 + n / 35 - n / 30 - n / 42 - n / 70 - n / 105 + n / 210 << '\n';
    }
}