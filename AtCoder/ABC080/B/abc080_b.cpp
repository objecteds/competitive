#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
int harshad(string s) {
    int t=0;
    for (auto x: s) t += x - '0';
    return t;
}
signed main() {
    fastio;
    int n; cin >> n;
    string s = to_string(n);
    if (n % harshad(s) == 0) cout << "Yes";
    else cout << "No";
}