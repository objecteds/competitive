#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);

    int n; cin >> n;
    long long area = 0;

    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        area += a * b;
    }

    cout << area;
}