#include <bits/stdc++.h>
using namespace std;
int main() {
    string s; cin >> s;
    char c = s[0];
    int t = 1;

    for (int i = 1; i < s.size(); i++) {
        if (s[i] == c) {
            t++;
            if (t >= 7) {
                cout << "YES";
                return 0;
            }
        } else {
            t = 1;
        }
        c = s[i];
    }

    if (s[s.size() - 1] == c) {
        t++;
        if (t >= 7) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
}