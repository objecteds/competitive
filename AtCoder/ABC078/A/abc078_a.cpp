#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    int a, b; cin >> hex >> a >> b;
    if (a < b) cout << "<";
    else if (a > b) cout << ">";
    else cout << "=";
}