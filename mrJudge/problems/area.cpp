#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    long long area = 0;

    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        area += a * b;
    }

    cout << area;
}