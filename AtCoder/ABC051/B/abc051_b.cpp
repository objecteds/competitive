#include <bits/stdc++.h>
using namespace std;
int main() {
    int k, s, t=0; cin >> k >> s;

    for (int x = 0; x <= k; x++) {
        for (int y = 0; y <= k; y++) {
            int z = s - x - y;
            if (0 <= z && z <= k) {
                t++;
            }
        }
    }

    cout << t;
}