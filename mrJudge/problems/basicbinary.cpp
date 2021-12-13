#include <bits/stdc++.h>
using namespace std;
int main() {
    string a, b; cin >> a;
    long long ans = 0;

    for (int i = a.size() - 1; i >= 0; i--) {
        b += a[i];
    }

    for (int i = 0; i < b.size(); i++) {
        int n = b[i] - '0';

        if (i == 0 && n == 1) {
            ans += 1;
        } else if (i > 0 && n == 1) {
            ans += pow(2, i);
        }
    }

    cout << ans;
}