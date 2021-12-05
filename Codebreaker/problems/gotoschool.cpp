#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    map<int, int> m;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        m[x] = i;
    }

    for (int i = 1; i <= n; i++) {
        cout << m[i] << " ";
    }
}