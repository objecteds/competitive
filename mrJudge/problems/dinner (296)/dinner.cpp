#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    int h, w, po = 0, pe = 0; cin >> h >> w;

    for (int i = 0; i < h; i++) {
        string s; cin >> s;
        for (int j = 0; j < w; j++) {
            if (s[j] == 'O') {
                po++;
            } else if (s[j] == 'N') {
                pe++;
            }
        }
    }

    cout << po << ' ' << pe << '\n';
}