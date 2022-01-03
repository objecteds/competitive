#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    long long x, t=0; cin >> x;
    vector<long long> A(200020);

    for (int i = 1; i <= n; i++) {
        cin >> A[i];
    }

    for (int i = 1; i <= n; i++) {
        int c = A[i-1] + A[i] - x;
        if (c > 0) {
            t += c;
            A[i] -= c;
        }
    }

    cout << t << '\n';
}