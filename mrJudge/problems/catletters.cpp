#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, t=0, c=0; cin >> n;

    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        for (int j = 0; j < s.size(); j++) {
            t++;
            if (s[j] == 'C' || s[j] == 'c') {
                c++;
            }
        }
    }

    cout << c*100/t << '%';
}