#include <bits/stdc++.h>
using namespace std;
bool isprime(int n) {
    if (n < 2) {
        return false;
    } else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                return false;
                break;
            }
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin >> n;
    
    for (int i = 0; i < n; i++) {
        int d; cin >> d;
        isprime(d) ? cout << d << " is a prime number.\n" : cout << d << " is a composite number.\n";
    }
}