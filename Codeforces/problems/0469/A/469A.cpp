#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x, y; cin >> n;
    map<int, int> M;

    cin >> x;

    for (int i = 0; i < x; i++) {
        int a; cin >> a;
        M[a]++;
    }

    cin >> y;

    for (int i = 0; i < y; i++) {
        int a; cin >> a;
        M[a]++;
    }

    for (int i = 1; i <= n; i++) {
        if (M[i] == 0) {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";
}