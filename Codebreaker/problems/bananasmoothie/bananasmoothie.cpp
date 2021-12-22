#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, k, ans=0; cin >> n >> k;
    long long q[n+1];

    for (int i = 1; i <= n; i++) {
        cin >> q[i];
    }

    sort(q+1, q+n+1, greater<long long>());

    for (int i = k; i <= n; i += k) {
        long long zero = 0;
        ans += max(q[i], zero);
        
        if (q[i] < 0) {
            break;
        }
    }

    cout << ans;
}