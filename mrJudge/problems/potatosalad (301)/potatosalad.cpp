#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, d;
    cin >> n >> d;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.rbegin(), v.rend());

    long long kg = 0;

    for (int i = 0; i < d; i++) {
        kg += v[i];
    }

    cout << kg;
}