#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = n-i-1; j > 0; j--) {
            cout << ' ';
        }
        cout << '/';
        for (int j = 0; j < i*2; j++) {
            cout << ' ';
        }
        cout << '\\' << '\n';
    }

    for (int i = n-1; i >= 0; i--) {
        for (int j = 1; j < n-i; j++) {
            cout << ' ';
        }
        cout << '\\';
        for (int j = i*2-1; j >= 0; j--) {
            cout << ' ';
        }
        cout << '/' << '\n';
    }
}