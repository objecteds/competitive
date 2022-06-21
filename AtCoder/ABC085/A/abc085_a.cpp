#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    string s; cin >> s;
    cout << "2018";
    for (int i = 4; i < s.size(); i++) {
        cout << s[i];
    }
}