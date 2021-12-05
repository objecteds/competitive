#include <bits/stdc++.h>
using namespace std;
int main() {
    string s, t;
    cin >> s >> t;

    int n = s.size();
    bool accepted = false;

    for (int i = 1; i < n; i++) {
        swap(s[i], s[i-1]);
        if (s == t) {
            accepted = true;
        } else {
            swap(s[i], s[i-1]);
        }
    }

    if (s == t) {
        accepted = true;
    }

    accepted ? cout << "Yes" : cout << "No";
}