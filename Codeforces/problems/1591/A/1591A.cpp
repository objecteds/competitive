#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;

    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        vector<int> v;

        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            v.push_back(x);
        }

        int height = 1;
        bool dead = false;

        if (v[0] == 1) {
            height++;
        }
        for (int i = 1; i < n; i++) {
            if (v[i] == 0 && v[i-1] == 0) {
                dead = true;
            } else if (v[i] == 1 && v[i-1] == 1) {
                height += 5;
            } else if (v[i] == 1) {
                height++;
            }
        }

        dead ? cout << -1 << '\n' : cout << height << '\n';
    }
}