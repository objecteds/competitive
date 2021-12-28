#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, t=0, b=0; cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        t += x;
        v.push_back(x);
    }

    int avg = t/n;

    for (int i = 0; i < n; i++) {
        if (v[i] >= avg) {
            b += v[i] - avg;
        }
    }

    cout << b;
}