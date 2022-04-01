#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    int n; cin >> n;
    int t = floor(sqrt(n)) * floor(sqrt(n));
    cout << t;
}