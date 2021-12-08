#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, c=0; cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        c += x;
    }
    cout << c;
}