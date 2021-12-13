#include <bits/stdc++.h>
using namespace std;
int main() {
    string a, b, c; cin >> a >> b;
    int n; cin >> n;

    for (int i = 0; i < a.size() / n; i++) {
        for (int j = 0; j < n; j++) {
            c += a[i*n + j];
        }
        for (int j = 0; j < n; j++) {
            c += b[i*n + j];
        }
    }

    cout << c;
}