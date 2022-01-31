#include <bits/stdc++.h>
using namespace std;
int main() {
    int j=0, r=0;
    string s; cin >> s;

    for (int i = 0; i < s.size() - 5; i++) {
        if (s[i] == 'R' && s[i+1] == 'A' && s[i+2] == 'N' && s[i+3] == 'A' && s[i+4] == 'L' && s[i+5] == 'D') {
            r++;
        }

        if (s[i] == 'J' && s[i+1] == 'A' && s[i+2] == 'C' && s[i+3] == 'K' && s[i+4] == 'E' && s[i+5] == 'T') {
            j++;
        }
    }

    j > r ? cout << "JACKET" : cout << "RANALD";
}