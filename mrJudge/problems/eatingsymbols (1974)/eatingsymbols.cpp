#include <bits/stdc++.h>
using namespace std;
int main() {
    string s; cin >> s;
    int t=0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '+') {
            t++;
        } else {
            t--;
        }
    }
    cout << t;
}