#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, t=0; cin >> n;
    vector<long long> V;

    for (int i = 0; i < n; i++) {
        long long x; cin >> x;
        V.push_back(x);
    }

    for (int i = 1; i < n; i++) {
        if (V[i-1] > V[i]) {
            t += (V[i-1]) - V[i];
            V[i] = V[i-1];
        }
    }

    cout << t;
}