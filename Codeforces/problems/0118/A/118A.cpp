#include <bits/stdc++.h>
using namespace std;
int main() {
    string s, a, b; cin >> s;

    for (int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
        if (s[i] != 'a' && s[i] != 'e' && s[i]!= 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y') {
            a += s[i];
        }
    }

    for (int i = 0; i < a.size() * 2; i++) {
        if (i % 2 == 0) {
            b += '.';
        } else {
            b += a[(i-1)/2];
        }
    }

    cout << b;
}