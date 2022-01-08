#include <bits/stdc++.h>
using namespace std;
int distance(pair<int, int> p1, pair<int, int> p2) {
    int x0 = p1.first - p2.first, y0 = p1.second - p2.second;
    double dist = x0 * x0 + y0 * y0;
    return dist;
}
int main() {
    int n; cin >> n;
    pair<int, int> p[n];

    for (int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        p[i].first = x, p[i].second = y;
    }

    int maxv = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            maxv = max(maxv, distance(p[i], p[j]));
        }
    }

    cout << fixed << setprecision(6) << sqrt(maxv);
}