#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin >> n;
    bool prime = true;

    if (n < 2) {
        prime = false;
    } else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                prime = false;
                break;
            }
        }
    }
    prime ? cout << "Prime\n" : cout << "Not Prime\n";
}