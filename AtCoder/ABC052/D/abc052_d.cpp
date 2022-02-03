#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, a, b, t=0; cin >> n >> a >> b;
    vector<long long> X(n);
    for (int i = 0; i < n; i++) cin >> X[i];

    for (int i = 1; i < n; i++) {
        long long d = X[i] - X[i-1];
        t += min(d*a, b);
    }

    cout << t;
}