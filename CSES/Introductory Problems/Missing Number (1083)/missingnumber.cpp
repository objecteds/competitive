#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    bool found = false;
    vector<int> V;

    for (int i = 0; i < n-1; i++) {
        int x; cin >> x; V.push_back(x);
    }

    sort(V.begin(), V.end());

    for (int i = 1; i < n; i++) {
        if (V[i-1] != i) {
            cout << i;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << n;
    }
}