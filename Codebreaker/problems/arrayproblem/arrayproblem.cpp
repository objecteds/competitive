#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, k, t=0; cin >> n >> k;
    vector<long long> a, v;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        a.push_back(x);
    }

    for (int i = n-1; i >= 0; i--) {
        t += a[i];
        
        if (i >= 1) {
            v.push_back(t);
        }
    }

    sort(v.rbegin(), v.rend());

    for (int i = 0; i < k-1; i++) {
        t += v[i];
    }

    cout << t;
}