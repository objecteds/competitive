#include <bits/stdc++.h>
using namespace std;
int main() {
    int f=0, s=0;

    for (int i = 0; i < 3; i++) {
        int x; cin >> x;
        if (x == 5) {
            f++;
        } else if (x == 7) {
            s++;
        }
    }

    f == 2 && s == 1 ? cout << "YES" : cout << "NO";
}