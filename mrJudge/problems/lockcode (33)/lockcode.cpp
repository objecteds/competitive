#include <bits/stdc++.h>
using namespace std;
bool isprime(int n) {
    if (n < 2) {
        return false;
    } else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int a, b, c, d; cin >> a >> b >> c >> d;
    
    isprime(a) && isprime(b) && isprime(c) && isprime(d) ? cout << "Opening..." : cout << "Wrong code";
}