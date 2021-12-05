#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;

    vector<int> v;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int best = 0;

    for (int i = 0; i <= n-k; i++) {
        int current = 0;
        for (int j = i; j < i+k; j++) {
            current += v[j];
        }
        best = max(best, current);
    }

    cout << best;

}