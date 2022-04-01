#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    int h, w; cin >> h >> w;
    vector<vector<char>> V(h+2, vector<char>(w+2, '-'));
    vector<int> dx = {1, 0, -1, 0, 1, -1, -1, 1};
    vector<int> dy = {0, 1, 0, -1, 1, 1, -1, -1};


    for (int i = 1; i <= h; i++) {
        string s; cin >> s;
        for (int j = 1; j <= w; j++) {
            V[i][j] = s[j-1];
        }
    }

    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            if (V[i][j] == '.') {
                int t = 0;
                for (int k = 0; k < 8; k++) {
                    if (V[i+dy[k]][j+dx[k]] == '#') t++;
                }
                char c = to_string(t)[0];
                V[i][j] = c;
            }
        }
    }
    
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            cout << V[i][j];
        }
        cout << endl;
    }
}