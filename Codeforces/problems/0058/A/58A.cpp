#include <bits/stdc++.h>
using namespace std;
int main() {
    string s; cin >> s;
    int t=1;

    for (auto x: s) {
        if (t == 1 && x == 'h') {
            t++;
        } else if (t == 2 && x == 'e') {
            t++;
        } else if (t == 3 && x == 'l') {
            t++;
        } else if (t == 4 && x == 'l') {
            t++;
        } else if (t == 5 && x == 'o') {
            t++;
        }
    }

    t > 5 ? cout << "YES" : cout << "NO";
}