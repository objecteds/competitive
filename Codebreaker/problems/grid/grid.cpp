#include <bits/stdc++.h>
using namespace std;
int main() {
    int h, w; cin >> h >> w;
    int m = 1e9+7;
    vector<vector<int> > a;
    vector<vector<long long> > p(h, vector<long long>(w, 0));

    for (int i = 0; i < h; i++) {
        vector<int> v;
        string s; cin >> s;

        for (int j = 0; j < w; j++) {
            if (s[j] == '.') {
                v.push_back(0);
            } else {
                v.push_back(1);
            }
        }

        a.push_back(v);
    }

    p[0][0] = 1;

    for (int i = 1; i < h; i++) {
        if (a[i][0] == 0) {
            p[i][0] = p[i-1][0] % m;
        }
    }

    for (int j = 1; j < w; j++) {
        if (a[0][j] == 0) {
            p[0][j] = p[0][j-1] % m;
        }
    }

    for (int i = 1; i < h; i++) {
        for (int j = 1; j < w; j++) {
            if (a[i][j] == 0) {
                p[i][j] = (p[i-1][j] + p[i][j-1]) % m;
            }
        }
    }

    cout << p[h-1][w-1] % m;
}