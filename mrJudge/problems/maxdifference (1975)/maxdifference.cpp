#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, minv=INT_MAX, maxv=0; cin >> n;
    
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        minv = min(minv, x);
        maxv = max(maxv, x);
    }
    
    cout << maxv - minv;
}