#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, t=INT_MAX, ans=INT_MAX; cin >> n;
    vector<long long> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        t = min(v[i], t + v[i]);
        ans = min(ans, t);
    }

    cout << ans;
}