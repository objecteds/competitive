#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, minv=INT_MAX; cin >> n;
    vector<int> A(n);

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = -100; i <= 100; i++) {
        int t = 0;
        for (auto x: A) {
            t += (x - i) * (x - i);
        }
        minv = min(t, minv);
    }

    cout << minv;
}