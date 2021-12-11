#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, s=0, p=0; cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b, c; 
        char op, eq;
        cin >> a >> op >> b >> eq >> c;
        if (op == '+') {
            if (a + b == c) {
                s++;
            }
        } else if (op == '-') {
            if (a - b == c) {
                s++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        int a, b, c; 
        char op, eq;
        cin >> a >> op >> b >> eq >> c;
        if (op == '+') {
            if (a + b == c) {
                p++;
            }
        } else if (op == '-') {
            if (a - b == c) {
                p++;
            }
        }
    }

    cout << "Spongebob: " << s << '\n';
    cout << "Patrick: " << p << '\n';
}