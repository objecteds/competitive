#include <bits/stdc++.h>
using namespace std;
int main() {
    string s, t, n; cin >> s >> t;

    for (int i = s.size()-1; i >= 0; i--) {
        n += s[i];
    }

    t == n ? cout << "YES" : cout << "NO";
}