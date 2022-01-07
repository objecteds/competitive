#include <bits/stdc++.h>
using namespace std;
int main() {
    int t=0;
    string s, x; cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != 'A') {
            x += s[i];
            t++;
        } else {
            break;
        }
    }
    for (int i = s.size(); i >= t; i--) {
        if (s[i] != 'Z') {
            x += s[i];
        } else {
            break;
        }
    }

    cout << s.size() - x.size() + 1;
}