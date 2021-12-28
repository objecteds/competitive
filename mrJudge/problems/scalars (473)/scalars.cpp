#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    vector<long long> x, y;

    for (int i = 0; i < n; i++) {
        long long a; cin >> a;
        x.push_back(a);
    }

    for (int i = 0; i < n; i++) {
        long long a; cin >> a;
        y.push_back(a);
    }

    sort(x.begin(), x.end());
    sort(y.rbegin(), y.rend());

    long long int ans = 0;

    for (int i = 0; i < n; i++) {
        ans += x[i] * y[i];
    }

    cout << ans;
}