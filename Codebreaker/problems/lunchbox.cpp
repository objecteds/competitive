#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v;

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    int d = 0, t = 0, i = 0;

    while (v[i] <= n - t && t < n && i <= v.size() - 1) {
        t += v[i];
        d++;
        i++;
    }

    cout << d;
}