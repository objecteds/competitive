#include <bits/stdc++.h>
using namespace std;
int main() {
    string a, b; getline(cin, a); getline(cin, b);
    map<char, int> mpa, mpb;
    bool ok = true;

    for (int i = 0; i < a.size(); i++) {
        if (isalpha(a[i])) {
            mpa[tolower(a[i])]++;
        }
    }

    for (int i = 0; i < b.size(); i++) {
        if (isalpha(b[i])) {
            mpb[tolower(b[i])]++;
        }
    }

    for (auto x: mpa) {
        if (x.second != mpb[x.first]) {
            ok = false;
            break;
        }
    }

    ok ? cout << "YES" : cout << "NO";
}