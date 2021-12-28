#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x, p = 0; cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    sort(v.rbegin(), v.rend());

    while (v.size() >= 4) {
        p += v[0] + v[1] + v[2];
        for (int i = 0; i < 4; i++) {
            v.erase(v.begin());
        }
    }

    if (v.size() > 0) {
        for (int i = 0; i < v.size(); i++) {
            p += v[i];
        }
    }
    cout << p << '\n';
}