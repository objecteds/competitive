#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    bool square = false;

    for (int i = 1; i*i <= n; i++) {
        if ((n % i == 0) && (n / i == i)) {
            square = true;
        }
    } 

    square ? cout << "yes" : cout << "no";
}