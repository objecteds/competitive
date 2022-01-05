#include <bits/stdc++.h>
using namespace std;
int modpow(int x, int n, int m) {
    if (n == 0) {
        return 1 % m;
    }

    long long u = modpow(x, n/2, m);
    u = (u*u) % m;

    if (n % 2 == 1) {
        u = (u * x) % m;
    }

    return u;
}

int main() {
    int n, mod=1e9+7; cin >> n;
    vector<int> A(n);

    for (int i = 0; i < n; i++) cin >> A[i];

    sort(A.begin(), A.end());

    if (A[0] == 0 && n % 2 != 0) {
        for (int i = 1; i < n; i += 2) {
            if (A[i] != A[i+1]) {
                cout << 0; 
                return 0;
            }
        }
        cout << modpow(2, n/2, mod);
    } else if (A[0] == 1 && n % 2 == 0) {
        for (int i = 0; i < n; i += 2) {
            if (A[i] != A[i+1]) {
                cout << 0;
                return 0;
            }
        }
        cout << modpow(2, n/2, mod);
    } else {
        cout << 0;
    }
}