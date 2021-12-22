#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, s; cin >> n >> m >> s;
    vector<int> main, side, total;

    for (int i = 0; i < m; i++) {
        int x; cin >> x;
        main.push_back(x);
    }

    for (int i = 0; i < s; i++) {
        int x; cin >> x;
        side.push_back(x);
    }

    sort(main.begin(), main.end());
    sort(side.rbegin(), side.rend());

    for (int i = 0; i < s-n; i++) {
        side.erase(side.begin());
    }

    for (int i = 0; i < n; i++) {
        total.push_back(main[i] + side[i]);
    }

    sort(total.begin(), total.end());

    cout << total[n-1];
}