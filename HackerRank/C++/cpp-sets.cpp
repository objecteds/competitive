#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int q, y, x; cin >> q;
    set<int> s;  
    
    for (int i = 0; i < q; i++) {
        cin >> y >> x;
        
        if (y == 1) {
            s.insert(x);
        } else if (y == 2) {
            s.erase(x);
        } else if (y == 3) {
            s.find(x) != s.end() ? cout << "Yes\n" : cout << "No\n";
        }
    } 
    
    return 0;
}