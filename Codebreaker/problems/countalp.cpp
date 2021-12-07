#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin >> n;
    string s; cin >> s;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    map<char, int> m;

    for (int i = 0; i < alphabet.size(); i++) {
        m[alphabet[i]] = 0;
    }

    for (int i = 0; i < n; i++) {
        m[s[i]] += 1;
    }

    for (auto x: m) {
        cout << x.first << " " << x.second << "\n";
    }
}