#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c; cin >> a >> b >> c;
    int t = a + b + c;

    if (max(max(a, b), max(b, c)) == t - max(max(a, b), max(b, c))) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}