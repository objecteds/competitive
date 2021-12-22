#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x1, y1, x2, y2;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        x1 == x2 || y1 == y2 ? cout << abs(x1 - x2) + abs(y1 - y2) << endl : cout << abs(x1 - x2) + abs(y1 - y2) + 2 << endl;
    }
}