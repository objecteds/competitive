#include <bits/stdc++.h>
using namespace std;
int main() {
    unsigned long long n, a=0, m1=0, m2=0; cin >> n;
    vector<unsigned long long> v;

    for (int i = 0; i < n; i++) {
        unsigned long long x; cin >> x;
        v.push_back(x);

        if (x > a) {
            a = x;
            m1 = i + 1;
        }
    }

    a = 0;

    for (int i = 0; i < v.size(); i++) {
        if (v[i] > a && i + 1 != m1) {
            a = v[i];
            m2 = i + 1;
        }
    }

    cout << min(m1, m2) << ' ' << max(m1, m2);
}