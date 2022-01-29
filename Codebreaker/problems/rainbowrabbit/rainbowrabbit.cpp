#include <bits/stdc++.h>
using namespace std;
int main() {
    long long c, minv=INT_MAX, m=0; cin >> c;
    vector<int> V;
    
    for (int i = 0; i < c; i++) {
        long long x; cin >> x;
        minv = min(minv, x);
        V.push_back(x);
    }

    for (auto x: V) {
        if (x > minv) {
            m++;
        }
    }

    long long t = minv * c + m;

    cout << t;
}