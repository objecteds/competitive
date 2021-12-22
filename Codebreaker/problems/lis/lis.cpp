#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, t=0; cin >> n;
    vector<int> dp;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        auto it = lower_bound(dp.begin(), dp.end(), x);
        int ind = lower_bound(dp.begin(), dp.end(), x) - dp.begin();

        if (it != dp.end()) {
            *it = x;
        } else {
            dp.push_back(x);
        }

        if (ind == t) {
            t++;
        }
    }

    cout << t;
}