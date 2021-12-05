#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k, gifts = 0, prev = 0;
    vector<int> v;
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    prev = v[0];

    for (int x: v) {
        if (prev - x >= k) {
            gifts += 1;
        }
        prev = x;
    }

    cout << gifts;
}