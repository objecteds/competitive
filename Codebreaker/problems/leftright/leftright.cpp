#include <bits/stdc++.h>
using namespace std;
int main() {
    int q; cin >> q;
    deque<int> D1, D2;
    bool flag = true;

    for (int i = 0; i < q; i++) {
        int c; cin >> c;
        if (c == 1) {
            int x; cin >> x;
            if (flag) {
                D2.push_back(x);
                if (D2.size() > D1.size()) {
                    D1.push_back(D2.front());
                    D2.pop_front();
                }
            } else {
                D1.push_back(x);
                if (D1.size() > D2.size()) {
                    D2.push_back(D1.front());
                    D1.pop_front();
                }
            }
        } else {
            if (flag && D1.size() > D2.size()) {
                D2.push_back(D1.front());
                D1.pop_front();
            } else if (not flag && D2.size() > D1.size()) {
                D1.push_back(D2.front());
                D2.pop_front();
            }
            flag = not flag;
        }
    }

    if (flag) {
        for (auto x: D1) {
            cout << x << ' ';
        }
        for (auto x: D2) {
            cout << x << ' ';
        }
    } else {
        for (auto x: D2) {
            cout << x << ' ';
        }
        for (auto x: D1) {
            cout << x << ' ';
        }
    }
}