#include <bits/stdc++.h>
using namespace std;
int main() {
    string s; cin >> s;
    bool ok = true;

    for (int i = 0; i < s.size(); i++) {
        if (!isalpha(s[i])) {
            ok = false;
            break;
        }
    }

    ok ? cout << "English" : cout << "l33t";
}