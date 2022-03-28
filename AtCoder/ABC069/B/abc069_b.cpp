#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    fastio;
    string s; cin >> s;
    cout << s[0] << s.size()-2 << s[s.size()-1];
}