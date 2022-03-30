#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    fastio;
    string s; cin >> s;
    for (auto x: s) {
        if (x == '9') {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}