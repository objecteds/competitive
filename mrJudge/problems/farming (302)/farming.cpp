#include <bits/stdc++.h>
using namespace std;
int main() {
    int h, w, p = 0; cin >> h >> w;

    for (int i = 0; i < h; i++) {
        string s; cin >> s;
        for (int j = 0; j < w; j++) {
            if (s[j] == '#') {
                p++;
            }
        }
    }

    cout << p << '\n';
}