#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
signed main() {
    fastio;
    int n; cin >> n;
    vector<string> V = {"1"};
    for (int i = 2; i <= n; i++) {
        string x = V.back() + " " + to_string(i) + " " + V.back();
        V.push_back(x);
    }
    cout << V.back();
}