#include <bits/stdc++.h>
using namespace std;
int main() {
    int y, w; cin >> y >> w;
    int required = 6 - max(y, w) + 1;

    if (required == 6) {
        cout << "1/1";
    } else if (required == 5) {
        cout << "5/6";
    } else if (required == 4) {
        cout << "2/3";
    } else if (required == 3) {
        cout << "1/2";
    } else if (required == 2) {
        cout << "1/3";
    } else if (required == 1) {
        cout << "1/6";
    } else {
        cout << "0/1";
    }
}