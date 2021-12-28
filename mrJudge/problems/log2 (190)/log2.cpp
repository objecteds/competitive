#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, t=0; cin >> n;

    while (n >= 2) {
        t++;
        n /= 2;
    }

    cout << t;
}