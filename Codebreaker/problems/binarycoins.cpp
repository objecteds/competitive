#include <bits/stdc++.h> 
using namespace std;
int main() {
    unsigned long long n, t=0; cin >> n;
    vector<long long> v;

    while (n > 0) {
        v.push_back(n % 2);
        n /= 2;
    }

    for (auto x: v) {
        t += x;
    }

    cout << t;
}