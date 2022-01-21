#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<pair<long long, long long>> S, P;

    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        S.push_back(make_pair(a, b));
    }

    for (int i = 0; i < m; i++) {
        int c, d; cin >> c >> d;
        P.push_back(make_pair(c, d));
    }

    for (auto x: S) {
        long long ind, lowest=INT_MAX;
        for (int i = 0; i < m; i++) {
            long long dist = abs(x.first - P[i].first) + abs(x.second - P[i].second);

            if (lowest > dist) {
                lowest = dist;
                ind = i + 1;
            }
        }
        cout << ind << '\n';
    }
}