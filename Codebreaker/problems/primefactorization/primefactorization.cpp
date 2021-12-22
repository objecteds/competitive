#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n; cin >> n;
    map<long long, long long> mp;

    while (n % 2 == 0) {
        mp[2]++;
        n /= 2;
    }

    for (long long i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            mp[i]++;
            n /= i;
        }
    }

    if (n > 2) {
        mp[n]++;
    }

    for (auto x: mp) {
        cout << x.first << '^' << x.second << '\n';
    }
}