#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    vector<char> D(k);

    for (int i = 0; i < k; i++) {
        cin >> D[i];
    }

    while (true) {
        bool found = false;
        string s = to_string(n);
        for (auto x: s) {
            for (auto y: D) {
                if (x == y) {
                    found = true;
                }
            }
        }

        if (!found) {
            cout << n;
            return 0;
        } 

        n++;
    }
}