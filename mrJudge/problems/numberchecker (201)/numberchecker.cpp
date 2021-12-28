#include <bits/stdc++.h>
using namespace std;
int main() {
    string s; cin >> s;
    bool alldigits = true;

    for (int i = 0; i < s.size(); i++) {
        if (!isdigit(s[i])) {
            alldigits = false;
        }
    }

    if (alldigits) {
        cout << stoi(s) * 2;
    } else {
        for (int i = 0; i < s.size(); i++) {
            s[i] = toupper(s[i]);
        }
        cout << s;
    }
}