#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k, t=0; cin >> n >> k;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        v.push_back(x);
    }

    int score = v[k-1];

    for (int i = 0; i < n; i++) {
        if (v[i] >= score && v[i] > 0) {
            t++;
        }
    }

    cout << t;
}