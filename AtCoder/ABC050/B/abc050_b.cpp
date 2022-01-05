#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m; cin >> n;
    vector<int> T(n);

    for (int i = 0; i < n; i++) cin >> T[i];

    cin >> m;

    for (int i = 0; i < m; i++) {
        int p, x, c=0; cin >> p >> x;
        vector<int> V = T;
        V[p-1] = x;

        for (auto y: V) {
            c += y;
        }

        cout << c << '\n';
    }
}