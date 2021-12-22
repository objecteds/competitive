#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    long n, a, b; cin >> n;
    vector<pair<long double, pair<long, long> > > v;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        long double div = a/(long double)b;
        v.push_back(make_pair(div, make_pair(a, b)));
    }

    sort(v.begin(), v.end());

    for (auto x: v) {
        cout << x.second.first << ' ' << x.second.second << '\n';
    }
}