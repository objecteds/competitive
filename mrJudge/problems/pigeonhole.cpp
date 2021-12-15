#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    int n, h, x, y, c=0; cin >> n >> h;
    vector<int> v(h);

    for (int i = 0; i < n; i++) {
        cin >> x >> y;

        if (x == 0) {
            v[y % h]--;
            v[y % h] == 1 ? c-- : c=c;
        } else {
            v[y % h]++;
            v[y % h] == 2 ? c++ : c=c;
        }

        c == 0 ? cout << 0 << '\n' : cout << 1 << '\n';
    }
}