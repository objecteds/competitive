#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, s, t=0; cin >> n >> s;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        v.push_back(x);
    }

    sort(v.rbegin(), v.rend());

    for (int i = 0; i < n; i++) {
        if (s > 0) {
            t += v[i];
            s--;
        } else {
            t += v[i] * 2;
        }
    }

    cout << t;
}