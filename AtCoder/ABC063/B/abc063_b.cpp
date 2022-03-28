#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
signed main() {
    string s; cin >> s;
    map<char, int> M;
    for (auto x: s) {
        M[x]++;
    }
    for (char c = 'a'; c <= 'z'; c++) {
        if (M[c] > 1) {
            cout << "no";
            return 0;
        }
    }
    cout << "yes";
}