#include <bits/stdc++.h>
using namespace std;
int main() {
    string a, b; cin >> a >> b;
    for (int i = 0; i < a.size()+b.size(); i++) {
        if (i % 2 == 0) {
            cout << a[i/2];
        } else {
            cout << b[i/2];
        }
    }
}