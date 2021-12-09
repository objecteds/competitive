#include <bits/stdc++.h>
using namespace std;
int main() {
    int h, w, n; cin >> h >> w >> n;

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (n > 0) {
                cout << 'X';
            } else {
                cout << 'O';
            }
            n--;
        }
        cout << '\n';
    }
}