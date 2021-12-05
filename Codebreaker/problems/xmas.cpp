#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    map<int, int> m;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        m[k] = i+1;
    }

    for (int i = 1; i <= n; i++) {
        cout << m[i] << endl;
    }
}