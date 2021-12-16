#include <bits/stdc++.h>
using namespace std;
int main() {
    int t = 0, n; cin >> n;

    for (int i = 0; i < n; i++) {
        vector<int> v;
        for (int j = 0; j < 3; j++) {
            int x; cin >> x;
            v.push_back(x);
        }

        if (count(v.begin(), v.end(), 1) >= 2) {
            t++;
        }
    }

    cout << t;
}