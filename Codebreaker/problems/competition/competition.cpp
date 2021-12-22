#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, a, b, total = 0; cin >> n >> a >> b;
    vector<int> phy, bio;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        total += x;
        phy.push_back(x);
    }

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        bio.push_back(x);
    }

    for (int i = 0; i < n; i++) {
        bio[i] -= phy[i];
    }

    sort(bio.rbegin(), bio.rend());

    for (int i = 0; i < b; i++) {
        total += bio[i];
    }

    cout << total;
}