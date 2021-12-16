#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    for (int ii = 0; ii < t; ii++) {
        vector<int> a, b;

        for (int i = 0; i < 7; i++) {
            int x; cin >> x;
            b.push_back(x);
        }

        a.push_back(b[0]);
        a.push_back(b[1]);


        if (b[0] + b[1] == b[2]) {
            a.push_back(b[3]);
        } else {
            a.push_back(b[2]);
        }

        for (auto x: a) {
            cout << x << ' ';
        }

        cout << '\n';
    }
}