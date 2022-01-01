#include <bits/stdc++.h>
using namespace std;
int main() {
    string s; cin >> s;
    vector<int> V;

    for (auto x: s) {
        if (x == '0') {
            V.push_back(0);
        } else if (x == '1') {
            V.push_back(1);
        } else {
            if (!V.empty()) {
                V.pop_back();
            }
        }
    }

    for (auto x: V) {
        cout << x;
    }
}