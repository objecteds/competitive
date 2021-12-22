#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    string s, t; cin >> s >> t;
    bool ss = true, tt = true;

    for (int i = 0; i < n; i++) {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'n') {
            if (s[i+1] != 'a' && s[i+1] != 'e' && s[i+1] != 'i' && s[i+1] != 'o' && s[i+1] != 'u') {
                ss = false;
                break;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        if (t[i] != 'a' && t[i] != 'e' && t[i] != 'i' && t[i] != 'o' && t[i] != 'u' && t[i] != 'n') {
            if (t[i+1] != 'a' && t[i+1] != 'e' && t[i+1] != 'i' && t[i+1] != 'o' && t[i+1] != 'u') {
                tt = false;
                break;
            }
        }
    }

    if (ss && tt) {
        cout << "su";
    } else if (ss || tt) {
        cout << "wan";
    } else {
        cout << "zero";
    }
}