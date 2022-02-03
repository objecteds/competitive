#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    vector<string> V(n);
    for (int i = 0; i < n; i++) {
        cin >> V[i];
    }
    sort(V.begin(), V.end());
    for (auto x: V) {
        cout << x;
    }
}