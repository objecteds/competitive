#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, s; cin >> n >> s;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        v.push_back(i);
    }

    for (int i = 0; i < s; i++) {
        int a, b; cin >> a >> b;
        swap(v[a], v[b]);
    }

    for (int x: v) {
        cout << x << '\n';
    }
}