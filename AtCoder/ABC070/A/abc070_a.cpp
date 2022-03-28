#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    fastio;
    int n; cin >> n;
    string s = to_string(n), a = to_string(n);
    reverse(s.begin(), s.end());
    if (s == a) cout << "Yes";
    else cout << "No";
}