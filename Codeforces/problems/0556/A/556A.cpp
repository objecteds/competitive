#include <bits/stdc++.h>
using namespace std;
int main() {
    int zero=0, one=0, n; cin >> n;
    string s; cin >> s;

    for (int i = 0; i < n; i++) {
        s[i] == '0' ? zero++ : one++;
    }

    cout << abs(zero - one);
}