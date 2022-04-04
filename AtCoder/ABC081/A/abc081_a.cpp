#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
signed main() {
    fastio;
    string s; cin >> s;
    int t=0;
    for (auto x: s) 
        if (x == '1') t++;
    cout << t;
}