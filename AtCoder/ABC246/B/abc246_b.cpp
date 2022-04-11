#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    double a, b; cin >> a >> b;
    double x = sqrt(a*a+b*b);
    cout << a/x  << " " << b/x;
}