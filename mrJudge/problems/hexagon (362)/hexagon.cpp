#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    int spaces = n - 1;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < spaces; j++) {
            cout << ' ';
        }

        for (int j = 0; j < n + i*2; j++) {
            cout << 'x';
        }

        spaces--;
        cout << '\n';
    }

    spaces = 1;

    for (int i = n-2; i >= 0; i--) {
        for (int j = 0; j < spaces; j++) {
            cout << ' ';
        }

        for (int j = 0; j < n + i*2; j++) {
            cout << 'x';
        }

        spaces++;
        cout << '\n';
    }
}