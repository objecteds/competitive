#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int a, b, i=1; cin >> a >> b;
    bool flag = false;
    while (a >= 0 && b >= 0) {
        flag = not flag;
        flag ? a -= i : b -= i;
        i++;
    }
    flag = not flag;
    flag ? cout << "Limak\n" : cout << "Bob\n";
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}