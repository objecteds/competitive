#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q, y; cin >> n;
    vector<int> v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }  
    
    cin >> q;
    
    for (int i = 0; i < q; i++) {
        cin >> y;
        if (*lower_bound(v.begin(), v.end(), y) == y) {
            cout << "Yes " << lower_bound(v.begin(), v.end(), y) - v.begin() + 1 << endl;
        } else {
            cout << "No " << lower_bound(v.begin(), v.end(), y) - v.begin() + 1 << endl;
        }
    }
    
    return 0;
}