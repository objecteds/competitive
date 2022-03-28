#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
signed main() {
    ios::sync_with_stdio(false); cin.tie(0);

    int a, b; cin >> a >> b;

    if (a % 3 == 0 || b % 3 == 0 | (a+b) % 3 == 0) cout << "Possible";
    else cout << "Impossible";
}