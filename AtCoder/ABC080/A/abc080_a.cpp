#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
signed main() {
    fastio;
    int n, a, b; cin >> n >> a >> b;
    cout << min(n*a, b);
}