#include <bits/stdc++.h>
using namespace std;
int main() {
    int w, h, n, t=0; cin >> w >> h >> n;
    vector<vector<int>> V(h, vector<int>(w, 1));

    for (int i = 0; i < n; i++) {
        int x, y, a; cin >> x >> y >> a;
        if (a == 1) {
            for (int j = 0; j < h; j++) {
                for (int k = 0; k < x; k++) {
                    V[j][k] = 0;
                }
            }
        } else if (a == 2) {
            for (int j = 0; j < h; j++) {
                for (int k = x; k < w; k++) {
                    V[j][k] = 0;
                }
            }
        } else if (a == 3) {
            for (int j = h-y; j < h; j++) {
                for (int k = 0; k < w; k++) {
                    V[j][k] = 0;
                }
            }
        } else if (a == 4) {
            for (int j = 0; j < h-y; j++) {
                for (int k = 0; k < w; k++) {
                    V[j][k] = 0;
                }
            }
        }
    }

    for (auto x: V) {
        for (auto y: x) {
            t += y;
        }
    }

    cout << t;
}