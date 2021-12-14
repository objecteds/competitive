#include <bits/stdc++.h>
using namespace std;
int main() {
    string s; cin >> s;
    int cura=0, curb=0, a=0, b=0;

    for (int i = 0; i < s.size(); i++) {
        s[i] == 'A' ? cura++ : curb++;

        if (cura == 21) {
            cout << cura << '-' << curb << '\n';
            a++; cura=0, curb=0;
        } else if (curb == 21) {
            cout << cura << '-' << curb << '\n';
            b++; cura=0, curb=0;
        }
    }

    a > b ? cout << "A" : cout << "B";
}