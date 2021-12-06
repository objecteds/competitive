#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n, q, l, r;
    cin >> n >> q;
    long long arr[n], pre[n+1];

    pre[0] = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        pre[i+1] = pre[i] + arr[i];
    }

    while (q--) {
        cin >> l >> r;
        cout << pre[r] - pre[l-1] << "\n";
    }
}