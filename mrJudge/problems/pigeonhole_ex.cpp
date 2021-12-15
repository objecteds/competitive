#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    int n, h, x, y; cin >> n >> h;
    vector<int> v(h);
    multiset<int, greater<int> > ms;

    for (int i = 0; i < n; i++) {
        cin >> x >> y;

        if (ms.find(v[y % h]) != ms.end()) {
            ms.erase(ms.find(v[y % h]));
        }

        if (x == 0) {
            v[y % h]--;
        } else {
            v[y % h]++;
        }

        ms.emplace(v[y % h]);

        cout << *ms.begin() << '\n';
    }
}