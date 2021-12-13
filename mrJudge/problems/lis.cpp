#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, t=0; cin >> n;
    vector<int> v, a(n, 1);

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        v.push_back(x);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (v[i] > v[j]) {
                a[i] = max(a[i], a[j] + 1);
            }
        }
        t = max(t, a[i]);
    }

    cout << t;
}