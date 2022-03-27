#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
signed main() {
    int h, w; cin >> h >> w;
    vector<vector<char>> V(h+2, vector<char>(w+2, '#'));
    
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            char c; cin >> c;
            V[i][j] = c;
        }
    }

    for (auto x: V) {
        for (auto y: x) {
            cout << y;
        }
        cout << endl;
    }
}