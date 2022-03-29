#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    fastio;
    string s; cin >> s;
    map<char, int> M;
    for (auto x: s) {
        M[x]++;
    }
    for (char c = 'a'; c <= 'z'; c++) {
        if (not M[c]) {
            cout << c;
            return 0;
        }
    }
    cout << "None";
}