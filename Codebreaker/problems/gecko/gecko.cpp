#include <bits/stdc++.h>
using namespace std;
int main() {
    int h, w, maxv=0; cin >> h >> w;
    vector<vector<int>> V(h, vector<int>(w));

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> V[i][j];
        }
    }

    for (int i = 1; i < h; i++) {
        for (int j = 0; j < w; j++) {
            int x = V[i][j];
            if (j == 0) {
                V[i][j] = max(x + V[i-1][j], x + V[i-1][j+1]);
            } else if (j == w-1) {
                V[i][j] = max(x + V[i-1][j-1], x + V[i-1][j]);
            } else {
                V[i][j] = max(max(x + V[i-1][j-1], x + V[i-1][j]), max(x + V[i-1][j], x + V[i-1][j+1]));
            }
        }
    }

    for (auto x: V[h-1]) {
        if (x > maxv) {
            maxv = x;
        }
    }

    cout << maxv << '\n';
}