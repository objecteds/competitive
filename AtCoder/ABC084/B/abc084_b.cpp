#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    fastio;
    int a, b; cin >> a >> b;
    bool ok = true;
    string s; cin >> s;

    if (s[a] != '-') ok = false;

    for (int i = 1; i <= a+b+1; i++) {
        if (i == a+1) {
            continue;
        } else if (not isdigit(s[i-1])) {
            ok = false;
        }
    }

    ok ? cout << "Yes" : cout << "No";
}