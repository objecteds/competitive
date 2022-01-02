#include <bits/stdc++.h>
using namespace std;
int main() {
    string s; cin >> s;
    int t=0;

    for (int i = 1; i < s.size(); i++) {
        if (s[i] != s[i-1]) {
            t++;
        }
    }

    cout << t;
}