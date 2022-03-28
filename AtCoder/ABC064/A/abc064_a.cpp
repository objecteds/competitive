#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
signed main() {
    int r, g, b; cin >> r >> g >> b;
    (r*100+g*10+b) % 4 == 0 ? cout << "YES" : cout << "NO";
}   