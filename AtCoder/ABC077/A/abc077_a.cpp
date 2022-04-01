#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    string a, b; cin >> a >> b;
    if (a[0] == b[2] && a[1] == b[1] && a[2] == b[0]) cout << "YES";
    else cout << "NO";
}