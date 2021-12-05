#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v;
    vector<int> bosses(n);

    for (int i = 1; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    for (int j = 0; j < n-1; j++) {
        bosses[v[j]-1]++;
    }

    for (int x: bosses) {
        cout << x << endl;
    }
}