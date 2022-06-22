#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    int n; cin >> n;
    set<int> D;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        D.insert(x);
    }
    cout << D.size();
}