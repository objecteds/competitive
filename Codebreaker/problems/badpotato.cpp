#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, best = 0, current = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x != -1) {
            current += x;
            best = max(best, current);
        } else {
            best = max(best, current);
            current = 0;
        }
    }

    cout << best;
}