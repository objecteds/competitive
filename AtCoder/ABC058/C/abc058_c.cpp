#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
signed main() {
    int n; cin >> n;
    vector<string> V(n);
    string ans;
    map<char, int> M;
    for (int i = 0; i < n; i++) cin >> V[i];

    for (char c = 'a'; c <= 'z'; c++) {
        M[c] = 999;
    }

    for (auto x: V) {
        map<char, int> temp;
        for (auto c: x) {
            temp[c]++;
        }
        for (char c = 'a'; c <= 'z'; c++) {
            M[c] = min(M[c], temp[c]);
        }
    }

    for (char c = 'a'; c <= 'z'; c++) {
        for (int i = 0; i < M[c]; i++) {
            ans += c;
        }
    }

    cout << ans;
}