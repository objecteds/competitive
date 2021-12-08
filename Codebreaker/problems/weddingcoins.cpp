#include <bits/stdc++.h>
using namespace std;
int main() {
    unsigned long long n, i=0, c=0; cin >> n;
    vector<int> v = {1000000, 500000, 100000, 50000, 10000, 5000, 1000, 500, 100, 50, 10, 5, 1};

    while (n >= 1) {
        c += n / v[i];
        n %= v[i];
        i++;
    }

    cout << c << endl;
}