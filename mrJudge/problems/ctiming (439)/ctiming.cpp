#include <bits/stdc++.h>
using namespace std;
int main() {
    int d, h, m; cin >> d >> h >> m;

    if (d == 11 && (h < 11 || (h == 11 && m < 11))) {
        cout << -1;
    } else {
        int days = (d - 11) * 24 * 60;
        int hours = (h - 11) * 60;
        int minutes = m - 11;
        int ans = days + hours + minutes;
        cout << ans;
    }
}