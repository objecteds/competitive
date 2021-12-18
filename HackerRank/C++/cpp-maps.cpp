#include <bits/stdc++.h>
using namespace std;

int main() {
    int q; cin >> q;
    map<string, int> M;
    
    for (int i = 0; i < q; i++) {
        int n; cin >> n;
        
        if (n == 1) {
            string x; cin >> x;
            int y; cin >> y;
            M[x] += y;
        } else if (n == 2) {
            string x; cin >> x;
            M[x] = 0;
        } else {
            string x; cin >> x;
            cout << M[x] << '\n';
        }
    }
    
    return 0;
}