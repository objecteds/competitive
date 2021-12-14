#include <bits/stdc++.h>
using namespace std;
int main() {
    int s, n; cin >> s >> n;
    int clean = s;

    for (int i = 0; i < n; i++) {
        string a; cin >> a;
        if (a == "USE") {
            clean--;
        } else {
            clean = s;
        }

        if (clean < 0) {
            cout << "DIRTY";
            return 0;
        }
    }

    clean < 0 ? cout << "DIRTY" : cout << "CLEAN";
}