#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    fastio;
    string s; cin >> s;
    for (int i = 0; i < s.size(); i += 2) {
        cout << s[i];
    }
}