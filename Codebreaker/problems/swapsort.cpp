#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);   

    int n, q, l, r, a, b, count = 0, s = 0;
    cin >> n;
    int p[n];

    for (int i = 0; i < n; i++) {
        cin >> p[i];
        if (p[i] == i+1) {
            count++;
        }
    }

    cin >> q;

    for (int i = 0; i < q; i++) {
        cin >> l >> r;
        swap(p[l-1], p[r-1]);
        
        if (p[l-1] == r) {
            count--;
        }
        if (p[r-1] == l) {
            count--;
        }
        if (p[l-1] == l) {
            count++;
        }
        if (p[r-1] == r) {
            count++;
        }
        
        if (count == n) {
            s++;
        }
    }

    cout << s << '\n';

    for (int x: p) {
        cout << x << ' ';
    }
}