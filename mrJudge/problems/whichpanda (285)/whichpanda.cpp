#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> v1, v2;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        v1.push_back(x);
        v2.push_back(x);
    }

    sort(v1.rbegin(), v1.rend());

    if (v1.size() > 1 && v1[0] == v1[1]) {
        cout << "MMMMMEEEEOOOOOWWWW!!!!!";
    } else {
        cout << find(v2.begin(), v2.end(), v1[0]) - v2.begin() + 1;
    }
}