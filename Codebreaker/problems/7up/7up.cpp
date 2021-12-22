#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k, x;
    cin >> n >> k >> x; // n children, k rounds, x position

    for (int i = x; i <= x + n*(k-1); i += n) {
        string j = to_string(i);
        if (j.find('7') < j.length() || i % 7 == 0) {
            cout << "UP!" << endl;
        } else {
            cout << i << endl;
        }
    }
}