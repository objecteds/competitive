#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k, x, y; cin >> n >> k >> x >> y;
    n > k ? cout << x * k + y * (n-k) : cout << x * n;
}