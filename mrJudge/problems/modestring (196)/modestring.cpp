#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, hi = 0; cin >> n >> m;
    vector<int> v;
    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        mp[x]++;
    }

    for (auto x: mp) {
        if (m > x.second && x.second > hi) {
            hi = x.second;
        }
    }

    cout << hi;
}