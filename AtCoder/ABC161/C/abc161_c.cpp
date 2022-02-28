#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int n, k; cin >> n >> k;
    cout << min(n%k, k-(n%k));
}